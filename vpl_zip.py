#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import os, sys
import argparse
import unicodedata
import string
import configparser
import subprocess
import json
import tempfile
from subprocess import run, PIPE
REMOTE_DATABASE = "https://raw.githubusercontent.com/qxcodefup/arcade/master/base"

def makeJson(folder):
    name = ""
    index = ""
    description = ""
    tempDir = tempfile.TemporaryDirectory()
    pathHtml = tempDir.name + os.sep + "t.html"
    pathVpl = tempDir.name + os.sep + "t.vpl"
    with open(folder + os.sep + "Readme.md") as f:
        words = f.readlines()[0].split(" ")
        index = words[1][1:] #primeira palavra, retirando o @
        name = " ".join(words[1:])
    generateHtml(name, folder + os.sep + "Readme.md", pathHtml, REMOTE_DATABASE + os.sep + index)
    with open(pathHtml) as f:
        description = f.read()
    os.remove(pathHtml)
    generateCases([folder + os.sep + "Readme.md", folder + os.sep + "t.tio"], pathVpl)
    cases = ""
    with open(pathVpl) as f:
        cases = f.read()
    os.remove(pathVpl)


    dict = {}
    dict["name"] = name
    dict["description"] = description
    dict["executionFiles"] = [{"name":"vpl_evaluate.cases", "contents": cases}]

    files = os.listdir(folder)
    files.remove("Readme.md")
    files    = [x for x in files if os.path.isfile(folder + os.sep + x)] #filtering directories
    files    = [x for x in files if (x.find(".") != -1)]    #filtering executables
    files    = [x for x in files if not x.startswith("__")] #filtering __*
    files    = [x for x in files if not x.endswith(".exe")] #filtering executables
    files    = [x for x in files if not x.endswith(".tio")] #filtering tests
    files    = [x for x in files if not x.endswith(".vpl")] #filtering tests
    required = [x for x in files if     x.startswith("student")] #required
    files    = [x for x in files if not x.startswith("student")] #filtering student file
    for file in files:
        with open(folder + os.sep + file) as f:
            if file.startswith("solver"):
                file += ".txt"
            dict["executionFiles"].append({"name": file, "contents": f.read()})

    if len(required) == 0:
        dict["requiredFiles"] = None
    else:
        with open(folder + os.sep + required[0]) as f:
            dict["requiredFile"] = {"name": required[0], "contents": f.read()}

    print(files)

    out = json.dumps(dict, indent = 2)
    return out

def generateCases(infiles, outfile):
    cmd = ["th", "build", outfile]
    for infile in infiles:
        if os.path.isfile(infile):
            cmd.append(infile)
    try:
        p = subprocess.Popen(cmd, stdout=PIPE, stderr=PIPE, universal_newlines=True)
        stdout, stderr = p.communicate()
        if(stdout != "" or stderr != ""):
            print(stdout)
            print(stderr)
    except Exception as e:
        print("Erro no comando th:", e)
        exit(1)


"""
generate a html page from infile
if remote_server not null, all reference to images begining with __
will be updates to full url
"""
def generateHtml(title, infile, outfile, remote_server = ""):
    fulltitle = title.replace('!', '\\!').replace('?', '\\?')
    cmd = ["pandoc", infile, '--metadata', 'pagetitle=' + fulltitle, '-s',  '-o', outfile]
    try:
        p = subprocess.Popen(cmd, stdout=PIPE, stderr=PIPE, universal_newlines=True)
        stdout, stderr = p.communicate()
        if(stdout != "" or stderr != ""):
            print(stdout)
            print(stderr)
    except Exception as e:
        print("Erro no comando pandoc:", e)
        exit(1)
    if remote_server == "":
        return
    try:
        text = ""
        with open(outfile, 'r') as f:
            text = f.read().replace('<img src="__', '<img src="' + remote_server + "/" + "__")
        with open(outfile, 'w') as f:
            f.write(text)
    except:
        print("Error changing local references to remote on hook", remote_server)
        exit(1)
    

def main():
    if len(sys.argv) == 1:
        print("passe o nome da pasta")
    else:
        vpl = makeJson(sys.argv[1])
        print(vpl)


if __name__ == '__main__':
    main()
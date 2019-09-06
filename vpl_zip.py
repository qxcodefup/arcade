#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import os, sys
import argparse
import unicodedata
import string
import configparser
import subprocess
import json
from subprocess import run, PIPE
REMOTE_DATABASE = "https://raw.githubusercontent.com/qxcodefup/arcade/master/base"

class VPL(object):
    def __init__(self, name = "", shortdescription = "", description = "", tests = "", executionFiles = []):
        self.id = ""
        self.name = name
        self.description = description
        self.tests = tests
        self.executionFiles = executionFiles
        self.requiredFile = None

    def load(self, path):
        with open(path) as f:
            data = json.load(f)
            self.name = data["title"]
            self.description = data["description"]
            self.executionFiles = data["executionFiles"]

            for entry in self.executionFiles:
                entry['encoding'] = 0
            if data["requiredFile"] != None:
                self.requiredFile = data["requiredFile"]
        return self

    def __str__(self):
        out = "title: " + self.name + "\n" + "description: " + self.description
        for file in self.executionFiles:
            out += "----" + file["name"] + "\n" + file["contents"] + "\n"
        if self.requiredFile != None:
            out += "----" + self.requiredFile["name"] + "\n" + self.requiredFile["contents"]
        return out


def process(folder):
    vpl = VPL()
    index = ""
    with open(folder + os.sep + "Readme.md") as f:
        words = f.readlines()[0].split(" ")
        index = words[1]
        vpl.name = " ".join(words[1:])
    generateHtml(vpl.name, folder + os.sep + "Readme.md", folder + os.sep + "t.html", REMOTE_DATABASE + os.sep + index)
    with open(folder + os.sep + "t.html") as f:
        vpl.description = f.read()
    return vpl
    #files = os.listdir(folder)
    #files = [x for x in files if os.path.isfile(folder + os.sep + x)]

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
    
print("Digite o alvo")
alvo = input()
vpl = process(alvo)
print(str(vpl))

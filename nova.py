#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import os
import shutil
import subprocess
import argparse

def main(begin):
    files = ["base/" + f for f in sorted(os.listdir("base"))]
    folders = [f for f in files if os.path.isdir(f)]
    next_dir = next (filter(lambda x: not x in folders, map(lambda x: "base/%03d" % (x), range(begin, 1000))), None)
    os.mkdir(next_dir)
    shutil.copyfile("drafts/model/Readme.md", next_dir + "/Readme.md")
    subprocess.run(["code", next_dir + "/Readme.md"])
    with open("Readme.md", "a") as f:
        hook = next_dir[5:]
        f.write("\n- [@" + hook + "]")
    #subprocess.run("./update.sh")
    with open(next_dir + "/solver.py", "w") as f:
        pass

parser = argparse.ArgumentParser()
parser.add_argument("-q", "--question", action='store_true')
parser.add_argument("-i", "--info", action='store_true')
args = parser.parse_args()

if args.question:
    main(0)
if args.info:
    main(500)

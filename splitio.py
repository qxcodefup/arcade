#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import os
import subprocess
from subprocess import run, PIPE

hooks = os.listdir("base")
for hook in hooks:
    text = ""
    with open("base/" + hook + "/Readme.md") as f:
        text = f.read()
    ini = text.find("<!---")
    fim = text.find("--->")
    text = text[:ini] + text[fim + 4:]
    with open("base/" + hook + "/Readme.md", "w") as f:
        f.write(text)
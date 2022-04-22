#!/bin/bash
kkmanual Readme.md
mdpp Readme.md
mdpp base/* -q
cp Readme.md table.md
kkmanual table.md -t

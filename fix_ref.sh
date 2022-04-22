#!/bin/bash
kkmanual Readme.md
mdpp Readme.md
mdpp base/* -q
./make_thumbs.sh
cp Readme.md table.md
kkmanual table.md -t __thumb.jpg

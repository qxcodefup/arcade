#!/bin/bash
kkmanual Readme.md -t __thumb.jpg
mdpp Readme.md
mdpp base/* -q
./make_thumbs.sh


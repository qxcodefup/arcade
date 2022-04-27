#!/bin/bash
kkmanual Readme.md -t .thumb.jpg
mdpp Readme.md
mdpp base/* -q
./make_thumbs.sh


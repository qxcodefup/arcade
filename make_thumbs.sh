#!/bin/bash
find . -type f -name "__capa.jpg" -execdir convert {} -resize 142x80^ -gravity center -extent 142x80 .thumb.jpg \;

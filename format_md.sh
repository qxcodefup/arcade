#!/bin/bash
sed -e 's/  $//' -e 's/ $//' -e 's/   / /' -e 's/<</========/' -e 's/\\>>/<<<<<<<<\n\n>>>>>>>>/' -i Readme.md
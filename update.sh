kkmanual Readme.md
mdpp Readme.md
mdpp base/* -q

#copy missing or changed files
cd ..
cp arcade/Readme.md moodle

#updating
kkmirror arcade moodle qxcodefup moodle

cd moodle
kkmanual --root Readme.md
# pushing moodle
git add .
git commit -m "updating"
git push origin master
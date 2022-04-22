bash fix_ref.sh
git add .
git commit -m "updating"
git push origin master

#copy missing or changed files
cd ..
cp arcade/Readme.md moodle

#updating
kkmirror arcade moodle qxcodefup moodle

cd moodle
# pushing moodle
git add .
git commit -m "updating"
git push origin master
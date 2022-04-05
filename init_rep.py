import subprocess

def push(section = "", questions = []):
    executable = "/home/tiger/Dropbox/gits/0_tools/mapi/mapi.py"
    cmd = [executable, "-c", "/home/tiger/.mapirc_fif"]
    cmd += ["add", "-s", str(section)]
    cmd += questions

    #print(" ".join(cmd))
    subprocess.run(cmd)

with open("Readme.md") as f:
    count = 0
    questions = []
    for line in f:
        if line.startswith("## "):
            if count > 0:
                push(count, questions)
            count += 1
            questions = []
        elif line.startswith("- [@"):
            label = line.split("@")[1].split(" ")[0]
            questions.append(label)
    push(count, questions)
    
#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import os, sys
import argparse
import unicodedata
import string

def strip_accents(text):
    try:
        text = unicode(text, 'utf-8')
    except NameError: # unicode is a default on python 3 
        pass
    text = unicodedata.normalize('NFD', text)\
           .encode('ascii', 'ignore')\
           .decode("utf-8")
    return str(text)

def get_indice(line):
    def find_indice(line):
        for i in range(0, (len(line) - 3)):
            found = True
            for x in line[i:i+4]:
                if not str.isdigit(x):
                    found = False
                    break
            if found:
                return i
        return -1

    pos = find_indice(line)
    if pos != -1:
        return line[pos : pos + 4]
    return None

def get_main(indice):
    return "base" + os.sep + str(indice) + os.sep + "Readme.md"
"""
    files = os.listdir(dir_path) #getting files
    main = [x for x in files if ".main.md" in x]
    if len(main) == 0:
        main = [x for x in files if "Readme.md" in x]
        if len(main) == 1:
            return dir_path + main[0]
        else:
            print("fail indice", indice, "nao possui arquivo .main.md ou Readme.md")
            exit(1)
    if len(main) > 1:
        print("fail: indice", indice, "com mais de um arquivo .main.md")
        exit(1)
    return dir_path + main[0]
"""

class Item:
    def __init__(self, title = ""):
        self.title = title
    
    #targets #(tags), @(indice)
    def filter_title(self, targets = "@#"):
        words = self.title.split(" ")

        del words[0] ##
        if "#" in targets:
            words = [x for x in words if not x.startswith("#")]
        if "@" in targets:
            words = [x for x in words if not x.startswith("@")]

        return " ".join(words)

    def get_dir(self):
        return "base" + os.sep + self.get_indice()

    def get_tags(self):
        words = self.title.split(" ")
        tags = [x[1:] for x in words if x.startswith("#") and (x != "##") and (x != "#")]
        return tags

    def get_indice(self):
        return get_indice(self.title)
    
    def get_main(self):
        return get_main(self.get_indice())


    def __str__(self):
        words = self.title.split(" ")
        if(words[0] == "##"):
            del words[0]
        return " ".join(words)

def load_item(path):
    with open(path, "r") as readme:
        title = readme.readlines()[0][:-1]
        if get_indice(path) != get_indice(title):
            print("fail: indice incompativel")
            print(path)
            print(title)
            exit(1)
        return Item(title)

def parse_from_dirs():
    itens = []
    base = [x[0] for x in os.walk("./base")][1:] # all directories

    dir_list = [(x + "/") for x in base if get_indice(x) != None] #avoid subdirectories
    indices_list = map(get_indice, dir_list)
    readme_list = map(get_main, indices_list)
    for path in readme_list:
        itens.append(load_item(path))
    return itens

def update_names_txt(itens):
    itens.sort(key=lambda x: x.filter_title("@"))
    with open("names.txt", "w") as saida:
        for item in itens:
            saida.write(item.title + "\n")


def parse_from_names_file():
    with open("names.txt", "r") as f:
        names_list = f.readlines()
    names_list = [x for x in names_list if (x != "" and x != "\n")]
    itens = []
    for line in names_list:
        item = Item()
        if(line[-1] == "\n"): #removing \n
            line = line[:-1]
        item.title = line
        itens.append(item)
    return itens

def filter_title(title):
    title = strip_accents(title).lower()
    new_title = ""
    for c in title:
        if c in string.punctuation or c in string.whitespace:
            new_title += "_"
        else:
            new_title += c
    while "__" in new_title:
        new_title = new_title.replace("__", "_")
    if new_title.endswith("_"):
        new_title = new_title[:-1]
    return new_title

def update_title_md_links(itens):
    for item in itens:
        title = filter_title(item.filter_title("@#").strip())
        files = os.listdir(item.get_dir()) #getting files
        old_titles = [x for x in files if x.endswith(".title.md")]
        old_titles = [(item.get_dir() + os.sep + x) for x in old_titles]
        new_title = item.get_dir() + os.sep + title + ".title.md"

        if (len(old_titles) == 1) and (old_titles[0] == new_title):
            continue

        for file in old_titles:
            os.remove(file)
        print("recriando link do titulo", new_title)
        f = open(new_title, "w")
        f.write("[README](Readme.md)\n")
        f.close()


def update_first_line(itens):
    for item in itens:
        data = []

        if not os.path.exists(item.get_main()):
            os.mkdir("./base/" + str(item.get_indice()))
            with open(item.get_main(), "w") as f:
                f.write((item.title + "\n"))
        else:                
            with open(item.get_main(), "r") as f:
                data = f.readlines()
            with open(item.get_main(), "w") as f:
                data[0] = (item.title + "\n")
                f.write("".join(data))

def update_qxcode_link(itens):
    for item in itens:
        data = []
        with open(item.get_main(), "r") as f:
            data = f.readlines()
        if data[1] != "## @qxcode\n":
            data.insert(1, "## @qxcode\n")
            with open(item.get_main(), "w") as f:
                print("adicionando @qxcode no arquivo", item.get_indice())
                f.write("".join(data))

def tree_generate(itens):
    tree = {}
    for item in itens:
        for tag in item.get_tags():
            if not tag in tree:
                tree[tag] = []
            tree[tag].append(item)
    return tree

def itens_show(itens):
    print("\n".join(str(v) for v in itens))

def update_indices(itens):
    itens.sort(key=lambda x: x.filter_title("@"))
    tree = tree_generate(itens)
    with open("Readme.md", "w") as f:
        f.write("# @qxcode\n\n# Lista de exercícios \n\n")
        
        f.write("\n# " + "TAGS" + "\n\n")
        for tag, lista in tree.items():
            f.write("\n## " + tag + "\n\n")
            lista.sort(key=lambda x: x.filter_title())
            for item in lista:
                f.write("- [" + item.filter_title("#@") + "](" + item.get_main() + "#qxcode" ")\n")
        
        f.write("\n\n# " + "ALL" + "\n\n")
        for item in itens:
            f.write("- [" + item.filter_title("@") + "](" + item.get_main() + ")\n")            
        


parser = argparse.ArgumentParser(prog='th.py')
#group = parser.add_mutually_exclusive_group()
#group.add_argument('-e', metavar='diff_cmd', type=str, help='Diff Externo. Ex: "meld".')
parser.add_argument('-s', action='store_true', help='set titles using names.txt')

args = parser.parse_args()


itens = []
if args.s:
    print("obtendo nomes do arquivo names.txt")
    itens = parse_from_names_file()
    update_first_line(itens)
else:
    print("obtendo nomes dos títulos dos arquivos")
    itens = parse_from_dirs()

update_qxcode_link(itens)
print("atualizado: recriando title.md")
update_title_md_links(itens)
print("atualizado: nomes dos arquivos")
update_names_txt(itens)
print("atualizado: names.txt")
update_indices(itens)
print("atualizado: indices")

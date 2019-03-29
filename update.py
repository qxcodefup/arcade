#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import os, sys
import argparse

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

    def get_tags(self):
        words = self.title.split(" ")
        tags = [x[1:] for x in words if x.startswith("#") and (x != "##") and (x != "#")]
        return tags

    def get_indice(self):
        return get_indice(self.title)
    
    def get_path(self):
        return "base" + os.sep + str(self.get_indice()) + os.sep + "Readme.md"


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

    readme_list = [(x + "/Readme.md") for x in base if len(x) == 11] #avoid subdirectories
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

def update_filenames(itens):
    for item in itens:
        title = item.filter_title("@#").strip()
        title = title.replace(" ", "_").replace(".", "_").replace(":", "")

        dir_path = "./base/" + str(item.get_indice() + "/")
        files = [x[2] for x in os.walk(dir_path)][0] #getting files
        titles = [x for x in files if ".title" in x] #filering title files
        
        if (not (title + ".title.md") in titles) or (len(titles) > 1):
            for t in titles:
                os.remove(dir_path + t)
            with open(dir_path + title + ".title.md", "w") as f:
                f.write("[Readme](Readme.md)\n")
            

def update_first_line(itens):
    for item in itens:
        data = []

        if not os.path.exists(item.get_path()):
            os.mkdir("./base/" + str(item.get_indice()))
            with open(item.get_path(), "w") as f:
                f.write((item.title + "\n"))
        else:                
            with open(item.get_path(), "r") as f:
                data = f.readlines()
            with open(item.get_path(), "w") as f:
                data[0] = (item.title + "\n")
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
                f.write("- [" + item.filter_title("#@") + "](" + item.get_path() + ")\n")
        
        f.write("\n\n# " + "ALL" + "\n\n")
        for item in itens:
            f.write("- [" + item.filter_title("@") + "](" + item.get_path() + ")\n")            
        


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
    itens = parse_from_dirs()

update_filenames(itens)
print("atualizado: nomes dos arquivos")
update_names_txt(itens)
print("atualizado: names.txt")
update_indices(itens)
print("atualizado: indices")

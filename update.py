#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import os, sys
import argparse
import unicodedata
import string
import configparser
import subprocess
from subprocess import run, PIPE
BASE = "base"

REMOTE_DATABASE = "https://raw.githubusercontent.com/qxcodefup/arcade/master/base"

class ItemGenerator:
    # load Item description from folder
    @staticmethod
    def make_from_hook(hook):
        readme_path = BASE + os.sep + hook + os.sep + "Readme.md"
        with open(readme_path, "r") as readme:
            item = Item(hook, readme.readlines()[0][:-1])
            return item

    # load item description from a single line in names.txt
    @staticmethod
    def make_from_line(line):
        if(line[-1] == "\n"): #removing \n
            line = line[:-1]
        parts = line.split(":")
        return Item(parts[0].strip(), parts[1].strip())

class Item:

    # get first line from file to mount Item
    def __init__(self, hook, line):
        words = line.split(" ")
        if(words[0] == '##'):
            del words[0] ##removing ##
        self.title = " ".join(words) #removing the ##
        self.hook = hook # directory
        self.tags = [x[1:] for x in words if x.startswith("#")]

    def __str__(self):
        return self.hook + ": " + self.title


class Itens:
    def __init__(self):
        self.itens = []

    def parse_from_dirs(self):
        hooks = os.listdir(BASE)
        hooks = [x for x in hooks if os.path.isdir(BASE + os.sep + x)]
        for hook in hooks: 
            try:
                self.itens.append(ItemGenerator.make_from_hook(hook))
            except FileNotFoundError as e:
                print(e)

    def parse_from_names_file(self):
        with open("names.txt", "r") as f:
            names_list = [x for x in f.readlines() if x != "\n"]
            for line in names_list:
                self.itens.append(ItemGenerator.make_from_line(line))
        
    def __str__(self):
        return "\n".join(str(v) for v in self.itens)

    def update_names_txt(self):
        self.itens.sort(key=lambda x: x.title)
        with open("names.txt", "w") as names:
            names.write("\n".join([str(x) for x in self.itens]))

    def update_title(self):
        for item in self.itens:
            data = []
            readme_path = BASE + os.sep + item.hook + os.sep + "Readme.md"
            if not os.path.exists(BASE + os.sep + item.hook): #
                print("folder", item.hook, "not found")
            else:                
                with open(readme_path, "r") as f: #le conteudo
                    data = f.readlines()
                old_first_line = data[0]
                new_first_line = "## " +  item.title + "\n"
                if(old_first_line != new_first_line):
                    with open(readme_path, "w") as f: #reescreve linha 0
                        data[0] = new_first_line
                        f.write("".join(data))
                        

    def verify_integrity(self):
        for item in self.itens:
            data = []
            readme_path = BASE + os.sep + item.hook + os.sep + "Readme.md"
            with open(readme_path, "r") as f:
                data = f.readlines()

            if(len(data) == 0):
                print("arquivo vazio on", item.hook)
                exit(1)

            if data[0].split(" ")[0] != "##":
                print("primeira linha deve começar com ## em", item.hook)
                exit(1)

            if len(data) < 2 or data[1] != "## @qxcode\n":
                data.insert(1, "## @qxcode\n")
                with open(item.readme_path, "w") as f:
                    print("adicionando @qxcode no arquivo", item.hook)
                    f.write("".join(data))


    # update Readme.md
    def update_indices(self):
        def tree_generate(itens):
            tree = {}
            tree['__tagless'] = []
            for item in itens:
                if len(item.tags) == 0:
                    tree['__tagless'].append(item)
                else:
                    for tag in item.tags:
                        if not tag in tree:
                            tree[tag] = []
                        tree[tag].append(item)
            return tree

        self.itens.sort(key=lambda x: x.title)
        tree = tree_generate(self.itens)
        with open("Readme.md", "w") as f:
            f.write("# @qxcode\n\n# Lista de exercícios \n\n")
            
            f.write("\n# " + "TAGS" + "\n\n")
            for tag, lista in tree.items():
                f.write("\n## " + tag + "\n\n")
                lista.sort(key=lambda x: x.title)
                for item in lista:
                    readme_path = BASE + os.sep + item.hook + os.sep + "Readme.md"
                    title_w_tags = " ".join([x for x in item.title.split(" ") if not x.startswith("#")])
                    f.write("- [" + title_w_tags + "](" + readme_path + "#qxcode" ")\n")       

def main():
    parser = argparse.ArgumentParser(prog='th.py')
    parser.add_argument('-s', action='store_true', help='set titles using names.txt')
    args = parser.parse_args()

    itens = Itens()
    if args.s:
        print("obtendo nomes do arquivo names.txt")
        itens.parse_from_names_file()
        itens.update_title()

    else:
        print("obtendo nomes dos títulos dos arquivos")
        itens.parse_from_dirs()
    
    itens.verify_integrity()
    itens.update_names_txt()
    itens.update_indices()
    print("all done")

main()
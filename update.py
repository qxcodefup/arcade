#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import os, sys
import argparse
import unicodedata
import string
import configparser
import subprocess
from subprocess import run, PIPE
SOURCE_FOLDER = "base"
MOODLE_FOLDER = "moodle"

REMOTE_DATABASE = "https://raw.githubusercontent.com/qxcodefup/arcade/master/base"

class ItemGenerator:
    # load Item description from folder
    @staticmethod
    def make_from_hook(hook):
        readme_path = SOURCE_FOLDER + os.sep + hook + os.sep + "Readme.md"

        with open(readme_path, "r") as readme:
            item = Item(hook, readme.readlines()[0][:-1])
            if hook != item.hook:
                print("fail: indice incompatível: ", hook, item.title)
                exit(1)
            return item

    # load item description from a single line in names.txt
    @staticmethod
    def make_from_line(line):
        if(line[-1] == "\n"): #removing \n
            line = line[:-1]
        parts = line.split(":")
        hook = parts[0]
        title = " ".join(parts[1:]) #skip index
        return Item(hook.strip(), title.strip())

class Item:

    # get first line from file to mount Item
    def __init__(self, hook, line):
        words = line.split(" ")            # removing ## used to set title
        keep = False
        for c in words[0]:
            if c != "#":
                keep = True
        if not keep:
            del words[0]

        self.fulltitle = " ".join(words) # title without the ##
        self.index = words[0][1:] # index sem o @
        self.title = " ".join(words[1:]) # fulltitle without the @index
        self.hook = hook # directory
        self.tags = [x[1:] for x in words if x.startswith("#")]
        self.dir = SOURCE_FOLDER + os.sep + self.hook
        self.readme_path = self.dir + os.sep + "Readme.md"

    #return all the words in fulltitle that dont start with any of the targets
    #targets example "#" or "#@"
    def filter_by_prefix(self, targets):
        words = self.fulltitle.split(" ")
        for c in targets:
            words = [x for x in words if not x.startswith(c)]
        return " ".join(words)

    #return 
    def __str__(self):
        return self.hook + ": " + self.fulltitle


class Itens:
    def __init__(self):
        self.itens = []

    def parse_from_dirs(self):
        hooks = os.listdir(SOURCE_FOLDER)
        hooks = [x for x in hooks if os.path.isdir(SOURCE_FOLDER + os.sep + x)]
        for hook in hooks:
            try:
                self.itens.append(ItemGenerator.make_from_hook(hook))
            except FileNotFoundError:
                pass

    def parse_from_names_file(self):
        with open("names.txt", "r") as f:
            names_list = [x for x in f.readlines() if x != "\n"]
            for line in names_list:
                self.itens.append(ItemGenerator.make_from_line(line))
        
    def __str__(self):
        return "\n".join(str(v) for v in self.itens)

    def update_names_txt(self):
        self.itens.sort(key=lambda x: x.filter_by_prefix("@"))
        with open("names.txt", "w") as names:
            names.write("\n".join([str(x) for x in self.itens]))

    def update_first_line(self):
        for item in self.itens:
            data = []
            readme_path = item.readme_path
            if not os.path.exists(item.dir): #cria diretorio e Readme.md
                os.mkdir(item.dir)
                with open(readme_path, "w") as f:
                    f.write((item.title + "\n"))
            else:                
                with open(readme_path, "r") as f: #le conteudo
                    data = f.readlines()
                old_first_line = data[0]
                new_first_line = "## @" + item.index + " " + item.title + "\n"
                if(old_first_line != new_first_line):
                    with open(readme_path, "w") as f: #reescreve linha 0
                        data[0] = new_first_line
                        f.write("".join(data))

    def verify_integrity(self):
        for item in self.itens:
            if item.index != item.hook:
                print("warning: hook=", item.hook, "index=", item.index)
        
        data = []
        with open(item.readme_path, "r") as f:
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

        self.itens.sort(key=lambda x: x.filter_by_prefix("@"))
        tree = tree_generate(self.itens)
        with open("Readme.md", "w") as f:
            f.write("# @qxcode\n\n# Lista de exercícios \n\n")
            
            f.write("\n# " + "TAGS" + "\n\n")
            for tag, lista in tree.items():
                f.write("\n## " + tag + "\n\n")
                lista.sort(key=lambda x: x.filter_by_prefix("@"))
                for item in lista:
                    f.write("- [" + item.filter_by_prefix("#@") + "](" + item.readme_path + "#qxcode" ")\n")       

def main():
    parser = argparse.ArgumentParser(prog='th.py')
    parser.add_argument('-s', action='store_true', help='set titles using names.txt')
    args = parser.parse_args()

    itens = Itens()
    if args.s:
        print("obtendo nomes do arquivo names.txt")
        itens.parse_from_names_file()
        itens.update_first_line()

    else:
        print("obtendo nomes dos títulos dos arquivos")
        itens.parse_from_dirs()
    
    itens.verify_integrity()
    #itens.generate_html_and_vpl()
    itens.update_names_txt()
    itens.update_indices()
    print("all done")

main()
#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import os, sys
import argparse
import unicodedata
import string
import configparser
from shutil import rmtree
import io

BASE = "base"
LINKS = "links"
SUMMARY = "summary.md"
BOARD = "board.md"

class ItemGenerator:
    # load Item description from folder
    @staticmethod
    def make_from_hook(hook):
        readme_path = Item.getReadme(hook)
        Item.verify(hook)
        with open(readme_path, "r") as readme:
            return Item(hook, readme.readlines()[0][:-1])

    # load item description from a single line in BOARD
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

    @staticmethod
    def getReadme(hook):
        return BASE + os.sep + hook + os.sep + "Readme.md"

    @staticmethod
    def verify(hook):
        readme_path = Item.getReadme(hook)
        data = []
        with open(readme_path, "r") as f:
            data = f.readlines()

        if(len(data) == 0):
            print("adicionando cabeçalho vazio em", hook)
            data.append("## #empty\n")
            data.append("## @qxcode\n")

        if data[0].split(" ")[0] != "##":
            print("adicionando ## em", hook)
            data[0] = "## " + data[0]

        if len(data) == 1 or data[1] != "## @qxcode\n":
            print("adicionando @qxcode em", hook)
            data.insert(1, "## @qxcode\n")

        if len(data) == 2:
            words = data[0].split(" ")
            if not "#empty" in words and not "#empty\n" in words:
                print("adicionado marcador #empty em", hook)
                data[0] = data[0][:-1] + " #empty\n"
        
        with open(readme_path, "w") as f:
            f.write("".join(data))

    def getBoardEntry(self):
        levels = BOARD.split(os.sep)
        prefix = "../" * (len(levels) - 1)
        return self.hook + ": " + self.title.ljust(70, ' ') + ":[](" + prefix + Item.getReadme(self.hook) + ')'

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
        with open(BOARD, "r") as f:
            names_list = [x for x in f.readlines() if x != "\n"]
            for line in names_list:
                self.itens.append(ItemGenerator.make_from_line(line))
        
    def __str__(self):
        return "\n".join(str(v) for v in self.itens)

    def update_board(self):
        self.itens.sort(key=lambda x: x.title)
        with open(BOARD, "w") as names:
            names.write("\n".join([x.getBoardEntry() for x in self.itens]) + "\n")

    def update_title(self):
        for item in self.itens:
            data = []
            readme_path = BASE + os.sep + item.hook + os.sep + "Readme.md"
            if not os.path.exists(BASE + os.sep + item.hook): #
                print("folder", item.hook, "not found, creating")
                os.mkdir(BASE + os.sep + item.hook)
                with open(readme_path, "w") as f:
                    f.write("## " + item.title + " #empty\n## @qxcode\n")
            else:                
                with open(readme_path, "r") as f: #le conteudo
                    data = f.readlines()
                old_first_line = data[0]
                new_first_line = "## " +  item.title + "\n"
                if(old_first_line != new_first_line):
                    with open(readme_path, "w") as f: #reescreve linha 0
                        data[0] = new_first_line
                        f.write("".join(data))

    def generate_links(self):
        rmtree(LINKS, ignore_errors=True)
        os.mkdir(LINKS)
        levels = LINKS.split(os.sep)
        prefix = "../" * len(levels)
        for item in self.itens:
            with open(LINKS + os.sep + item.title + ".md", "w") as f:
                f.write("[LINK](" + prefix + BASE + os.sep + item.hook + os.sep + "Readme.md)\n")

    # update Readme.md
    def update_indices(self):
        def tree_generate(itens):
            tree = {}
            for item in itens:
                if len(item.tags) == 0:
                    if not '__tagless' in tree:
                        tree['__tagless'] = []
                    tree['__tagless'].append(item)
                else:
                    for tag in item.tags:
                        if not tag in tree:
                            tree[tag] = []
                        tree[tag].append(item)
            return tree

        self.itens.sort(key=lambda x: x.title)
        tree = tree_generate(self.itens)
        summary = io.StringIO()
        readme_text = io.StringIO()
        readme_text.write("## @qxcode\n\n## Lista de exercícios \n\n")
        readme_text.write("## " + "TAGS" + "\n\n")
        for tag, lista in tree.items():
            readme_text.write("\n### " + tag + "\n\n")
            summary.write("#" + tag + "\n")
            lista.sort(key=lambda x: x.title)
            for item in lista:
                summary.write(item.hook + " ")
                readme_path = BASE + os.sep + item.hook + os.sep + "Readme.md"
                title_w_tags = " ".join([x for x in item.title.split(" ") if not x.startswith("#")])
                readme_text.write("- [" + title_w_tags + "](" + readme_path + "#qxcode" ")\n")
            summary.write("\n\n")
        
        with open("Readme.md", "w") as f:
            f.write(readme_text.getvalue())
        with open(SUMMARY, "w") as f:
            f.write(summary.getvalue())
        readme_text.close()
        summary.close()

def load_globals():
    config = configparser.ConfigParser()
    if not os.path.isfile('config.ini'):
        return
    try:
        config.read('config.ini')
        global BASE, LINKS, SUMMARY, BOARD
        BASE = config["DEFAULT"]["base"]
        LINKS = config["DEFAULT"]["links"]
        SUMMARY = config["DEFAULT"]["summary"]
        BOARD = config["DEFAULT"]["board"]
    except Exception as e:
        print(e)

def main():
    parser = argparse.ArgumentParser(prog='th.py')
    parser.add_argument('-s', action='store_true', help='set titles using names.txt')
    args = parser.parse_args()
    load_globals()

    itens = Itens()
    if args.s:
        print("obtendo nomes do arquivo names.txt")
        itens.parse_from_names_file()
        itens.update_title()
        itens = Itens()
        itens.parse_from_dirs()
    else:
        print("obtendo nomes dos títulos dos arquivos")
        itens.parse_from_dirs()

    itens.update_board()
    itens.update_indices()
    itens.generate_links()
    print("all done")

main()
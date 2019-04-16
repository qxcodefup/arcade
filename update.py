#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import os, sys
import argparse
import unicodedata
import string
import configparser

SOURCE_FOLDER = ""

class Text:
    @staticmethod
    def strip_accents(text):
        try:
            text = unicode(text, 'utf-8')
        except NameError: # unicode is a default on python 3 
            pass
        text = unicodedata.normalize('NFD', text).encode('ascii', 'ignore').decode("utf-8")
        return str(text)

    @staticmethod
    def filter_punct(title):
        title = Text.strip_accents(title).lower()
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
    

    @staticmethod
    def has_only_hashtags(word):
        for c in word:
            if c != "#":
                return False
        return True


class ItemGenerator:
    @staticmethod
    def make_from_hook(hook):
        readme_path = SOURCE_FOLDER + os.sep + hook + os.sep + "Readme.md"

        with open(readme_path, "r") as readme:
            item = Item(hook, readme.readlines()[0][:-1])
            if hook != item.hook:
                print("fail: indice incompatível: ", hook, item.title)
                exit(1)
            return item

    @staticmethod
    def make_from_line(line):
        if(line[-1] == "\n"): #removing \n
            line = line[:-1]
        parts = line.split(":")
        hook = parts[0]
        title = " ".join(parts[1:])
        return Item(hook.strip(), title.strip())

class Item:
    def __init__(self, hook, title):
        words = title.split(" ")            #removendo os # no começo da linha
        if Text.has_only_hashtags(words[0]):
            del words[0]
        self.title = " ".join(words)
        self.hook = hook
        self.tags = [x[1:] for x in words if x.startswith("#")]
        self.dir = SOURCE_FOLDER + os.sep + self.hook
        self.readme_path = self.dir + os.sep + "Readme.md"

    def filter_by_prefix(self, targets):
        words = self.title.split(" ")
        for c in targets:
            words = [x for x in words if not x.startswith(c)]
        return " ".join(words)

    def generate_link_name(self):
        return Text.filter_punct(self.filter_by_prefix("@#").strip())

    def __str__(self):
        return self.hook + ": " + self.title


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

    def update_title_md_links(self):
        for item in self.itens:
            title = item.generate_link_name() #generating name of file .title.md
            files = os.listdir(item.dir) #getting files and directories
            old_titles = [x for x in files if x.endswith(".title.md")]
            old_titles = [(item.dir + os.sep + x) for x in old_titles]
            new_title = item.dir + os.sep + title + ".title.md"

            if (len(old_titles) == 1) and (old_titles[0] == new_title): #doesn't have change
                continue

            for file in old_titles:
                os.remove(file)
            print("recriando link do titulo", new_title)
            with open(new_title, "w") as f:
                f.write("[README](Readme.md)\n")
   
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
                with open(readme_path, "w") as f: #reescreve linha1
                    data[0] = ("## " + item.title + "\n")
                    f.write("".join(data))


    def update_qxcode_link(self):
        for item in self.itens:
            data = []
            print(item)
            with open(item.readme_path, "r") as f:
                data = f.readlines()
            if len(data) < 2 or data[1] != "## @qxcode\n":
                data.insert(1, "## @qxcode\n")
                with open(item.readme_path, "w") as f:
                    print("adicionando @qxcode no arquivo", item.hook)
                    f.write("".join(data))


    def update_indices(self):
        def tree_generate(itens):
            tree = {}
            for item in itens:
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

    config = configparser.ConfigParser()
    config.read('config.ini')

    global SOURCE_FOLDER
    SOURCE_FOLDER = config['DEFAULT']['SOURCE_FOLDER']

    itens = Itens()
    if args.s:
        print("obtendo nomes do arquivo names.txt")
        itens.parse_from_names_file()
        itens.update_first_line()
    else:
        print("obtendo nomes dos títulos dos arquivos")
        itens.parse_from_dirs()

    itens.update_qxcode_link()
    print("atualizado: recriando title.md")
    itens.update_title_md_links()
    print("atualizado: nomes dos arquivos")
    itens.update_names_txt()
    print("atualizado: names.txt")
    itens.update_indices()
    print("atualizado: indices")


main()
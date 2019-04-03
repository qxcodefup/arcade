#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import os, sys
import argparse
import unicodedata
import string

SOURCE_FOLDER = "base"


def strip_accents(text):
    try:
        text = unicode(text, 'utf-8')
    except NameError: # unicode is a default on python 3 
        pass
    text = unicodedata.normalize('NFD', text).encode('ascii', 'ignore').decode("utf-8")
    return str(text)

def filter_punct(title):
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


def get_readme_path(hook):
    return  SOURCE_FOLDER + os.sep + hook + os.sep + "Readme.md"


class Item:
    def __init__(self, title = ""):
        self.title = title

    # return words not initiated with any char in targets
    def filter_by_prefix(self, targets = "@#"):
        words = self.title.split(" ")
        del words[0] ##
        for c in targets:
            words = [x for x in words if not x.startswith(c)]
        return " ".join(words)

    def get_hook(self):
        #primeira palavra com o @, mas sem o @
        return [x for x in self.title.split(" ") if x.startswith("@")][0][1:]

    def get_readme(self):
        return get_readme_path(self.get_hook())

    def get_dir(self):
        return SOURCE_FOLDER + os.sep + self.get_hook()

    def get_tags(self):
        words = self.title.split(" ")
        return [x[1:] for x in words if x.startswith("#") and (x != "##") and (x != "#")]

    def str(self):
        words = self.title.split(" ")
        if(words[0] == "##"):
            del words[0]
        return " ".join(words)

def load_item(hook):
    try:
        with open(get_readme_path(hook), "r") as readme:
            item = Item(readme.readlines()[0][:-1])
            if hook != item.get_hook():
                print("fail: indice incompatível: ", hook, item.title)
                exit(1)
            return item
    except:
        print("folder", hook, "dont have a Readme.md")

def parse_from_dirs():
    itens = []
    hooks = os.listdir(SOURCE_FOLDER)
    for hook in hooks:
        itens.append(load_item(hook))
    return itens

def update_names_txt(itens):
    itens.sort(key=lambda x: x.filter_by_prefix("@"))
    with open("names.txt", "w") as names:
        names.write("\n".join([x.str() for x in itens]))

def parse_from_names_file():
    with open("names.txt", "r") as f:
        names_list = f.readlines()
    names_list = [x for x in names_list if (x != "" and x != "\n")]
    itens = []
    for line in names_list:
        if(line[-1] == "\n"): #removing \n
            line = line[:-1]
        itens.append(Item(line))
    return itens


def update_title_md_links(itens):
    for item in itens:
        title = filter_punct(item.filter_by_prefix("@#").strip())
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
        readme_path = item.get_readme()
        if not os.path.exists(item.get_dir()): #cria diretorio e Readme.md
            os.mkdir(item.get_dir())
            with open(readme_path, "w") as f:
                f.write((item.title + "\n"))
        else:                
            with open(readme_path, "r") as f: #le conteudo
                data = f.readlines()
            with open(readme_path, "w") as f: #reescreve linha1
                data[0] = (item.title + "\n")
                f.write("".join(data))

def update_qxcode_link(itens):
    for item in itens:
        data = []
        readme_path = item.get_readme()
        with open(readme_path, "r") as f:
            data = f.readlines()
        if data[1] != "## @qxcode\n":
            data.insert(1, "## @qxcode\n")
            with open(readme_path, "w") as f:
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
    itens.sort(key=lambda x: x.filter_by_prefix("@"))
    tree = tree_generate(itens)
    with open("Readme.md", "w") as f:
        f.write("# @qxcode\n\n# Lista de exercícios \n\n")
        
        f.write("\n# " + "TAGS" + "\n\n")
        for tag, lista in tree.items():
            f.write("\n## " + tag + "\n\n")
            lista.sort(key=lambda x: x.filter_by_prefix())
            for item in lista:
                f.write("- [" + item.filter_by_prefix("#@") + "](" + item.get_readme() + "#qxcode" ")\n")
        
        #f.write("\n\n# " + "ALL" + "\n\n")
        #for item in itens:
        #    f.write("- [" + item.filter_by_prefix("@") + "](" + item.get_readme_path() + ")\n")            
        

def main():
    parser = argparse.ArgumentParser(prog='th.py')
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


main()
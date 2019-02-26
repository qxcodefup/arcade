#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import os
import re

base = [x[0] for x in os.walk("./base")]
tags = {'ope':[], 'sel':[], 'rep':[], 'vet':[], 'cha':[], 'str':[], 'mat':[], 'arq':[]}

with open("./indice.md", "w+") as saida:
    saida.write("# @qxcode\n\nArquivo a ser gerado automaticamente a partir dos títulos das questões.")
    for i in range(1,len(base)):
        with open(base[i] + "/Readme.md", "r") as readme:
            texto = readme.readlines()
            tags[re.compile(".*?((?:[a-z][a-z]+))", re.IGNORECASE|re.DOTALL).search(texto[0]).group(1)].append((("- [%s](%s/Readme.md#qxcode)\n" % (texto[0].strip()[3:], base[i]))))

    for tag in tags:
        tags[tag] = sorted(tags[tag], key=lambda x : int(re.compile(".*?(?:[a-z][a-z]*[0-9]+[a-z0-9]*).*?((?:[a-z][a-z]*[0-9]+[a-z0-9]*))",re.IGNORECASE|re.DOTALL).search(x).group(1)[1]))
        
        if tags[tag]:
            saida.write("\n\n")
            saida.write("## %s\n" % tag)
            for questao in tags[tag]:
                print(questao, end="")
                saida.write(questao)

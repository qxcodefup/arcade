#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import os

base = [x[0] for x in os.walk("./base")]
indexes = []
for i in range(1,len(base)):
    with open(base[i] + "/Readme.md", "r") as readme:
        texto = readme.readlines()
        indexes.append(("- [%s](%s/Readme.md#qxcode)\n" % (texto[1].strip()[3:], base[i])))


with open("./indice.md", "w+") as saida:
    saida.write("# @qxcode\n\nArquivo a ser gerado automaticamente a partir dos títulos das questões.\n\n")
    for linha in indexes:
        saida.write(linha)


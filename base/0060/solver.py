#!/usr/bin/env python3
lista = [int(x) for x in input().split(" ")]

M = lista[0] #maior
m = lista[0] #menor
for x in lista:
    if x > M:
        M = x
    if x < m:
        m = x

print(str(m + M))

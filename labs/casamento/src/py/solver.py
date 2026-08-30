#!/usr/bin/env python3
lista = [int(x) for x in input().split(" ")]

_m: int = lista[0] #maior
m: int = lista[0] #menor
for x in lista:
    if x > _m:
        _m = x
    if x < m:
        m = x

print(str(m + _m))

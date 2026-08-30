#pra usar o print do python 3
from __future__ import print_function

value = int(input())
for i in range(value):
    print('.' * (value - 1 - i), end="")
    print(".".join([str(value)] * (i + 1)), end="")
    print('.' * (value - 1 - i))
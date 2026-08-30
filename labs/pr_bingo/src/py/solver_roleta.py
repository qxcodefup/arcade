import random
from os import system

def mostrar_lista(lista: list[int]):
    ind = 0
    while ind < len(lista):
        if ind % 15 == 0:
            print("")
        print(f"{lista[ind]:>2d}", end=" ")
        ind = ind + 1
    print("")

def mostrar_rack(lista: list[int]):
    num = 1
    while num < 76:
        if (num - 1) % 15 == 0:
            print("")
        if num in lista:
            print(f"{num:>2d}", end=" ")
        else:
            print("__", end=" ")
        num = num + 1
    print("")

#opcao1
roleta: list[int] = []
rack: list[int] = []
num = 1
while num < 76:
    roleta.append(num)
    num = num + 1
#opcao2
#roleta = range(1, 75, 1)
system("clear")
mostrar_rack(roleta)

opcao = 1
while opcao != 0 and len(roleta) > 0:
    print("Escolha 1 para pedir bola e 0 para sair")
    print(">> ", end="")
    opcao = int(input())
    if(opcao == 0):
        continue

    system("clear")

    ind = random.randint(0, len(roleta) - 1)
    num = roleta[ind]
    rack.append(num)
    rack = sorted(rack)
    del roleta[ind]
    print("Roleta:")
    mostrar_rack(roleta)
    print("#########################")
    print(f"Numero sorteado: {num}")
    print("#########################")
    print("Rack")
    mostrar_rack(rack)

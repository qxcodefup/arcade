num = int(input())
slista = input().split(" ")

lista = []
for x in slista:
    lista.append(int(x))

olista = sorted(lista)
lista = olista
difer = []
difer.append(lista[0])
for x in range(1, num):
    if lista[x] != lista[x - 1]:
        difer.append(lista[x])

for x in difer:
    print (x, end = "")
    if(x != difer[len(difer) - 1]):
        print(" ", end = "")
print()
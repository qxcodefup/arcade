lista = input().split(" ")

ordenado = True
for x in range(len(lista) - 1):
    if lista[x] > lista[x + 1]:
        ordenado = False
        break
if ordenado:
    print("sim")
else:
    print("nao")
import random

cartela: list[list[str]] = [[],[],[],[],[]] #B, I, N, G, O
linhas = 5
colunas = 5
passo = 15
for i in range(0, linhas):
    lista: list[int] = list(range(i * passo + 1, (i + 1) * passo + 1))

    for x in range(0, colunas):
        ind = random.randint(0, len(lista) - 1)
        num = lista[ind]
        del lista[ind]
        cartela[i].append(str(num))

cartela2: list[list[str]] = []
for i in range(0, 5):
    cartela2.append((cartela[i][:]))

cartela2[2][2] = "##"

print("B  I  N  G  O")
for x in range(0, linhas):
    for y in range(0, colunas):
        print(f"{cartela2[y][x]:>2s}", end=" ")
    print("")

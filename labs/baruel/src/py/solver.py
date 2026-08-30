def print_arr(arr: list[int]):
    print("[ ", end = "")
    for x in arr:
        print(x, end = "")
        print(" ", end = "")
    print ("]")

album = input()
num = input()
slista = input().split(" ")

lista: list[int] = []
for x in slista:
    lista.append(int(x))

repetidas: list[int] = []
for ind in range(1, int(num)):
    if(lista[ind] == lista[ind - 1]):
        repetidas.append(lista[ind])
faltam: list[int] = []
for x in range(1, int(album) + 1):
    if not (x in lista):
        faltam.append(x)

print_arr(repetidas)
print_arr(faltam)
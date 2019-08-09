album = input()
num = input()
slista = input().split(" ")

lista = []
for x in slista:
    lista.append(int(x))

repetidas = []
for ind in range(1, int(num)):
    if(lista[ind] == lista[ind - 1]):
        repetidas.append(lista[ind])
faltam = []
for x in range(1, int(album) + 1):
    if not (x in lista):
        faltam.append(x)

if len(repetidas) == 0:
    print ("N")
else:
    for x in repetidas:
        print (x, end = "")
        if(x != repetidas[len(repetidas) - 1]):
            print(" ", end = "")
    print ("")
if len(faltam) == 0:
    print ("N")
else:
    for x in faltam:
        print (x, end = "")
        if(x != faltam[len(faltam) - 1]):
            print(" ", end = "")
    print ("")
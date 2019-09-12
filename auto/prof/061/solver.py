tam = int(input())
lista = [int(x) for x in input().split(" ")]

lista2 = lista[::-1]
print("[ ", end = "")
for x in lista2:
    print (x, end = " ")
print("]")
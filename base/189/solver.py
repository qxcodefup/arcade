value = int(input())
cont = 2
while(value != 1):
    fatores = 0
    while(value % cont == 0):
        value = value / cont
        fatores += 1
    if fatores > 0:
        print(cont, fatores)
    cont += 1
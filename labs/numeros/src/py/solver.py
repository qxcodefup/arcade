words = input().split(" ")
cont = 0
for w in words:
    try:
        value = int(w)
        cont += value
    except:
        pass
print(cont)
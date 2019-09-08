texto = input()

saida = ""
for x in texto:
    if x == x.lower():
        saida += x.upper()
    else:
        saida += x.lower()
        
print(saida)
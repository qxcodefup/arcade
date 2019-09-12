dia = int(input())
hora = int(input())
minuto = int(input())

if (dia >= 2 and dia <= 6) and ((hora >= 8 and hora < 12) or (hora >= 14 and hora < 18)):
    print ("SIM")
elif dia == 7 and (hora >= 8 and hora < 12):
    print ("SIM")
else:
    print ("NAO")
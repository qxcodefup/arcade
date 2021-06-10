hora = int(input())
minuto = int(input())
dia = int(input())
mes = int(input())
ano = int(input())

# hora = hora if hora <= 12 else hora - 12
if hora > 12:
    hora -= 12

ano = ano % 100

print("%02d:%02d %02d/%02d/%02d" % (hora, minuto, dia, mes, ano))

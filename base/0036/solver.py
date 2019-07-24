num1 = int(input())
num2 = int(input())
num3 = int(input())

maior = num1
menor = num1

if num2 > maior:
    maior = num2
if num3 > maior:
    maior = num3

if num2 < menor:
    menor = num2
if num3 < menor:
    menor = num3

print((num1 + num2 + num3) - (maior + menor))
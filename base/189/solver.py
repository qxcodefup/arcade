def eh_primo(value):
    if value < 2:
        return False
    for i in range(2, value):
        if value % i == 0:
            return False
    return True

def intsqrt(value):
    for i in range(1, value):
        if i * i == value:
            return i
        elif i * i > value:
            return i - 1

value = int(input())
final = value
limite = intsqrt(value)
for i in range(2, limite):
    if eh_primo(i) and value % i == 0:
        print(i, end=" ")
        cont = 0
        while(value % i == 0):
            cont += 1
            value = value / i
        print(cont)
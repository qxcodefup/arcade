from random import randint
for _ in range(1):
    print(">>>>>>>>")
    qtd = randint(5, 10)
    print(qtd)
    for _ in range(qtd):
        if(randint(0, 10) < 2):
            print("0")
        else:
            print(randint(1, 9))
    print("========")
    print("<<<<<<<<\n\n")
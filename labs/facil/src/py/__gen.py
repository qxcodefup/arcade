import random

for i in range (10):
    print(">>>>>>>>")
    qtd = random.randint(2, 10)
    print(qtd, end=' ')
    for j in range(qtd):
        print(random.randint(100, 1000), end = ' ')
    print("\n========")
    print("<<<<<<<<\n")
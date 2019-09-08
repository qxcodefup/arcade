n = int(input(""))
g = 0
c = 0
arena = []

for i in range(n):
    arena.append(input().split(" "))

for i in range(n):
        if arena[i].count('L') != 1:
            for j in range(n):
                if(arena[i][j] == 'C' and i+j== n-1):
                    c+=2
                elif(arena[i][j] == 'G'):
                    g+=2
                elif(arena[i][j] == 'C'):
                    c+=1
if(g > c):
    print("Gladiadores")
elif(g < c):
    print("Condenados a morte")
else:
    print("Ninguem")

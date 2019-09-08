vnome = ""
vpoder = -1
i = 0
v = [0,0]
while(i < 2):
    qnt = int(input())
    while(qnt>0):
        nome = str(input())
        poder = int(input())
        v[i] += poder
        if(vpoder < poder):
            vnome = nome
            vpoder = poder
        qnt -= 1
    i += 1

if(v[0] == v[1]):
    print ("Draw")  
elif(v[0]>v[1]):
    print ("Team Iron Wins")
else:
    print ("Team Captain Wins")
print(vnome)
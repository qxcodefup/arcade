inicio = raw_input().split(" ")
fim = raw_input().split(" ")

h1 = int(inicio[0])
m1 = int(inicio[1])
s1 = int(inicio[2])

h2 = int(fim[0])
m2 = int(fim[1])
s2 = int(fim[2])

tseg1 = h1 * 60 * 60 + m1 * 60 + s1
tseg2 = h2 * 60 * 60 + m2 * 60 + s2

if(tseg2 > tseg1):
    dif = tseg2 - tseg1
else:
    dif = tseg2 - tseg1 + (24 * 60 * 60)

hsono = dif / 3600
dif = dif % 3600
msono = dif / 60
ssono = dif % 60

if (hsono < 10):
    hsono = str(0) + str(hsono)
if (msono < 10):
    msono = str(0) + str(msono)
if(ssono < 10):
    ssono = str(0) + str(ssono)

print hsono, msono, ssono




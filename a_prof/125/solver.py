num = input()

Si = 0
Sp = 0
for i in range(0, len(num)):
    if i % 2 == 0:
        Sp += int(num[i])
    else:
        Si += int(num[i])
sub = Si - Sp

if abs(sub) % 11 == 0:
    print("sim")
else:
    print("nao")
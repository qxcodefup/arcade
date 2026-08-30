value = int(input())
factor: int = 2
count: int  = 0
while value > 1:
    if value % factor == 0:
        value = value / factor
        count += 1
    else:
        if count > 0:
            print(factor, count)
        count = 0
        factor += 1

if count > 0:
    print(factor, count)

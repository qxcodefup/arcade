data = [int(x) for x in input().split(" ")]
del data[0]
sum = 0
for i in range(0, len(data) - 1):
    if data[i] < data[i + 1]:
        sum += data[i + 1] - data[i]
data.reverse()
sum2 = 0
for i in range(0, len(data) - 1):
    if data[i] < data[i + 1]:
        sum2 += data[i + 1] - data[i]
print(min([sum, sum2]))

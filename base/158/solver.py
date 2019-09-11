qtd = int(input())
winner = None
efford = None
for k in range(qtd):
    data = input().split(" ")
    del data[0]
    data = [int(x) for x in data]
    sum = 0
    for i in range(0, len(data) - 1):
        if data[i] < data[i + 1]:
            sum += data[i + 1] - data[i]
    data.reverse()
    sum2 = 0
    for i in range(0, len(data) - 1):
        if data[i] < data[i + 1]:
            sum2 += data[i + 1] - data[i]
    if sum2 < sum:
        sum = sum2
    if (winner == None) or sum < efford:
        winner = k
        efford = sum
print(winner + 1)

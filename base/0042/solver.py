def compara(n1, n2, n3):
    if n1 < n2 and n1 < n3:
        return "P"
    if n1 > n2 and n1 > n3:
        return "G"
    else:
        return "M"

p1 = input()
p2 = input()
p3 = input()

print compara(p1, p2, p3),
print compara(p2, p1, p3),
print compara(p3, p1, p2)
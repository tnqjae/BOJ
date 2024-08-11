sum = 0
peli = []
for i in range(10):
    m, n = map(int, input().split())
    sum -= m
    sum += n
    peli.append(sum)

print(max(peli))
n = int(input())

for i in range(n):
    a, b = map(int, input().split())
    m, k = a, b
    
    while a%b != 0:
        a,b = b, a%b
    print(m*k // b)
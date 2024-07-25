n = int(input())

num_list =  list(map(int, input().split()))
i = 0
for j in range(1, n):
    if num_list[i] != num_list[j]:
        print((str(j+1) + ' ') * (j-i), end = '')
        i = j

print('-1 ' * (n - i), end='')

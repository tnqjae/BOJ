import sys

n, k = map(int, sys.stdin.readline().split())
arr = [x for x in map(int, sys.stdin.readline().split())]

def sol(arr, k):
    cnt = 0
    n = len(arr) - 1
    
    for i in range(n, 0,-1):
        for j in range(i):
            if arr[j] > arr[j+1]:
                cnt += 1
                arr[j], arr[j+1] = arr[j+1], arr[j] 

                if cnt == k:
                    print(*arr)
                    exit()
    
sol(arr, k)
print(-1)
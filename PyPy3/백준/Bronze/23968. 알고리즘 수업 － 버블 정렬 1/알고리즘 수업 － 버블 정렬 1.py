import sys

n, k = map(int, sys.stdin.readline().split())
arr = list(map(int, sys.stdin.readline().split()))

def sol(arr, K):
    cnt = 0
    n = len(arr)
    
    for i in range(n-1):
        for j in range(n-1-i):
            if arr[j] > arr[j+1]:
                cnt += 1
                arr[j], arr[j+1] = arr[j+1], arr[j] 

                if cnt == K:
                    print(arr[j], arr[j+1])
                    return

    print(-1)

sol(arr, k)
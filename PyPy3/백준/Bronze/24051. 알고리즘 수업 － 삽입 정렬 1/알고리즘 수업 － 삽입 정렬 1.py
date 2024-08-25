import sys

n, k = map(int, sys.stdin.readline().split())
arr = list(map(int, sys.stdin.readline().split()))

def sol(arr, k):
    cnt = 0
    for i in range(1, len(arr)):
        loc = i - 1
        tmp = arr[i]

        while(0 <= loc and tmp < arr[loc]):
            cnt += 1
            arr[loc + 1] = arr[loc]
            loc -= 1
            
            if cnt == k:
                print(arr[loc+1])
                return
        if (loc + 1 != i):
            cnt += 1
            arr[loc + 1] = tmp            
            if cnt == k:
                print(arr[loc+1])
                return
    print(-1)
    return

sol(arr, k)
import sys

n, k = map(int,sys.stdin.readline().split())
arr = [x for x in map(int,sys.stdin.readline().split())]

def solution(arr, k):
    for i in range(len(arr) - 1,0, -1):
        max = arr[i]
        max_idx = i
        for j in range(i - 1, -1, -1):
            if max < arr[j]:
                max_idx = j
                max = arr[j]
        if i != max_idx:
            arr[i], arr[max_idx] = arr[max_idx], arr[i]
            k -= 1
        if k == 0:
            return 0

result = solution(arr,k)
if result == 0:
    print(*arr)
else:
    print(-1)
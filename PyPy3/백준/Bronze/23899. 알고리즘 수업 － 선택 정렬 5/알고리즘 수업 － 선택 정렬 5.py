import sys

n = int(sys.stdin.readline())
arr = [x for x in map(int, sys.stdin.readline().split())]
match = [x for x in map(int, sys.stdin.readline().split())]

def sol(arr, match, n):
    for i in range(n - 1, 0, -1):
        if arr == match:
            break
        idx = arr.index(max(arr[:i + 1]))
        if idx != i:
            arr[idx], arr[i] = arr[i], arr[idx]
sol(arr, match,n)
print(1 if arr == match else 0)
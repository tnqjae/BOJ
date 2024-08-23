import sys
def solution(arr, num):
    cnt = 0
    for i in range(len(arr)-1,0,-1):
        max = i
        for j in range(0, i, 1):
            if arr[j] > arr[max]:
                max = j
        if arr[i] != arr[max]:
            arr[i],arr[max] = arr[max], arr[i]
            cnt += 1
        if cnt == num:
            return arr[max],arr[i]
    return -1

n, k = map(int,sys.stdin.readline().split())
arr = list(map(int,sys.stdin.readline().split()))
result = solution(arr,k)
if result != -1:
    for i in result:
        print(i,end = " ")
else:
    print(result)
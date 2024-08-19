num_list = list(map(int, input('').split()))
odd, even = 1, 1
flag = False

for num in num_list:
    if num % 2 != 0:
        odd *= num
        flag = True
    else:
        even *= num

if flag:
    print(odd)
else:
    print(even)

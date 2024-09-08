num = int(input())
while True:
    flag = True
    for i in str(num):
        if i!="4" and i!="7":
            flag = False
            num -= 1
    if flag :
        print(num)
        break

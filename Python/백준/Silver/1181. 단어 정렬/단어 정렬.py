n = int(input())

str_list = []
for i in range(n):
    str_list.append(input())

str_list = list(set(str_list))
str_list.sort()
str_list.sort(key = len)

for list_output in str_list:
    print(list_output)
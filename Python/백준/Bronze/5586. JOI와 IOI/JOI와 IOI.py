li = list(input()) 
joi, ioi = 0, 0 
for i in range(len(li)-2): 
    if li[i] == 'J' and li[i+1] == 'O' and li[i+2] == 'I': 
        joi += 1 
    if li[i] == 'I' and li[i+1] == 'O' and li[i+2] == 'I': 
        ioi += 1 
print(joi) 
print(ioi)
n = int(input())

fibo = 0

def fib(n):
    zero, one = 1, 0 
    for i in range(n):
        zero,one = one, zero+one 
    return one
    
def fibonacci(n):
    return n - 2

print(fib(n), fibonacci(n))
def memo(n):
    if n == 1: return 1
    if n == 2: return 2
    if n == 3: return 4
    
    dp = [0] * 12
    
    dp[1], dp[2], dp[3] = 1, 2, 4
    
    for i in  range(4, n + 1):
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3]
        
    return dp[n]
    

n = int(input())

for i in range (n):
    t = int(input())
    print(memo(t))
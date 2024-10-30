T = int(input())

for i in range(T):
    n,m = map(int,input().split())
    dp = [[1]*(m+1) for _ in range(m+1)]
    
    for j in range(2,m+1):
        dp[1][j] = j
    
    for j in range(2,n+1):
        for k in range(j+1,m+1):
            dp[j][k] = dp[j-1][k-1] + dp[j][k-1]
                
    print(dp[n][m])
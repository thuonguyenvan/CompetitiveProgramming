import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    dp=[]
    s=input().strip()
    s=s[::-1]
    val=[1,10,100,1000,10000]
    for i in range(2):
        dp.append([])
        for j in range(5):
            dp[i].append([0,0])
    for i in range(5):
        dp[0][i][0]=dp[0][i][1]=-10**18
    dp[0][0][0]=0
    for c in s:
        x=ord(c)-ord('A')
        for i in range(5):
            dp[1][i][0]=dp[1][i][1]=-10**18
        for i in range(5):
            for j in range(2):
                for k in range(5):
                    t1=max(i,k)
                    t2=j+int(x!=k)
                    if (t2<2):
                        dp[1][t1][t2]=max(dp[1][t1][t2], dp[0][i][j] + (-val[k] if k<t1 else val[k]))
        dp[0],dp[1]=dp[1],dp[0]
    res=-10**18
    for i in range(5):
        res=max(res, max(dp[0][i][0], dp[0][i][1]))
    print(res)

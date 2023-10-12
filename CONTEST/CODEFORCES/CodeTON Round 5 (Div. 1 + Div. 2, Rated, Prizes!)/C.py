import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n=int(input()); a=R(); dp=[0]*n; keep=[10**9]*(n+1)
    for i in range(n): dp[i]=min(dp[i-1]+1, keep[a[i]]); keep[a[i]]=min(keep[a[i]], dp[i-1])
    print(n-dp[-1])
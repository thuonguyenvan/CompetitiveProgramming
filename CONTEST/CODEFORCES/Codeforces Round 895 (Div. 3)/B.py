import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n=int(input())
    a=[R() for i in range(n)]
    res=10**18
    for i in range(n):
        if a[i][1]>=3: res=min(res,a[i][0]+a[i][1]//2 - int(a[i][1]%2==0))
        else: res=min(res,a[i][0])
    print(res)
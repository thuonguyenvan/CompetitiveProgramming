import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n=int(input())
    a=R()
    check=[0]*(n+1)
    for i in range(n-1,-1,-1):
        t=check[i+1]
        if a[i]>0: t+=a[i]
        check[i]=t
    res=0
    for i in range(n):
        t=check[i+1]
        if i&1==0: t+=a[i]
        res=max(res,t)
    print(res)

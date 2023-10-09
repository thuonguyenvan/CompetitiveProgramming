import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n=int(input())
    a=R()
    idx=[0]*(n+1)
    for i in range(n):
        idx[a[i]]=i
    res=n
    for i in a:
        if i==1: continue
        t1=idx[i]
        t2=idx[i-1]
        if t2>t1: res-=1
    print(n-res)

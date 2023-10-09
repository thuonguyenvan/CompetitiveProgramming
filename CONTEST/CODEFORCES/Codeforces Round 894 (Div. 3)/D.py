import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n=int(input())
    l,r=0,10**18+1
    res=r
    while l<=r:
        m=(l+r)//2
        s=m*(m-1)//2
        if s>n: r=m-1
        else:
            res=min(res,n-s+m)
            l=m+1
    print(res)
    

import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
t = int(input())
for _ in range(t):
    n, x =R()
    a=sorted(R())
    l=0;r=10**18
    res=-1
    while l<=r:
        m=l+r>>1
        s=0
        for i in a: s+=(m-i if m-i>0 else 0)
        if s<=x:
            res=m
            l=m+1
        else: r=m-1
    print(res)

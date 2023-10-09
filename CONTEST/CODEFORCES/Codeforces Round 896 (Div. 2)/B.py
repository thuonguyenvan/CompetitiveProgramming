import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n,k,a,b=R()
    arr=[R() for i in range(n)]
    t1=10**18
    t2=10**18
    xa,ya=arr[a-1]
    xb,yb=arr[b-1]
    for x,y in arr[:k]:
        t1=min(t1,abs(xa-x)+abs(ya-y))
        t2=min(t2,abs(xb-x)+abs(yb-y))
    res=t1+t2
    t1=10**18
    t2=10**18
    for x,y in arr:
        res=min(res,abs(xa-x)+abs(ya-y)+abs(xb-x)+abs(yb-y))
    print(min(res,t1+t2))

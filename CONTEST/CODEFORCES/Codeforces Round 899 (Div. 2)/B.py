import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n=int(input())
    a=[R() for i in range(n)]
    a.sort()
    a.reverse()
    check=[0]*55
    for i in range(n):
        for k in a[i][1:]: check[k]=1
    t=sum(check)
    res=0
    for j in range(n):
        oldcheck=[0]*55
        for i in range(j,n):
            check=oldcheck.copy()
            for k in a[i][1:]: check[k]=1
            if sum(check)==t: continue
            oldcheck=check.copy()
        res=max(res,sum(oldcheck))
    print(res)
            

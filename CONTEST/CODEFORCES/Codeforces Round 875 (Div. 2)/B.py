import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n=int(input()); a=R()+[-1]; b=R()+[-1]
    ca=[0]*(2*n+1); cb=[0]*(2*n+1)
    cnta=1; cntb=1
    for i in range(n):
        if a[i]==a[i+1]: cnta+=1
        else: ca[a[i]]=max(ca[a[i]], cnta); cnta=1
        if b[i]==b[i+1]: cntb+=1
        else: cb[b[i]]=max(cb[b[i]], cntb); cntb=1
    res=0
    for i in a:
        res=max(ca[i]+cb[i], res)
    for i in b:
        res=max(cb[i]+ca[i], res)
    print(res)
        
    
    

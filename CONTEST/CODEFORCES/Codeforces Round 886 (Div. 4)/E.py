import sys;input=sys.stdin.readline
R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n,k=R()
    a=R()
    l=0;r=10**18+1
    res=-1
    while (l<=r):
        m=(l+r)//2
        s=0
        for i in a:
            s+=(2*m+i)**2
            if s>k: break
        if s==k: res=m; break
        if s<k:  l=m+1
        else: r=m-1
    print(res)
    
    
        
            

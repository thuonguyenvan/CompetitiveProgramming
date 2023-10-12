import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n,m,k=R()
    res=[]; ans=[]
    for i in range(n):
        a=sorted(R())
        pen,pb,time=0,0,0
        for j in range(m):
            if time+a[j]<=k:
                time+=a[j]
                pen+=time
                pb+=1
            else: break
        res.append([m-pb, pen])
        if i==0: ans=res[i]
    res.sort()
    print(res.index(ans)+1)
            

import sys;ip=sys.stdin.readline;R=lambda:list(map(int,ip().split()))
for _ in range(int(ip())):
    n=int(ip()); a=R(); dic=[0]*(n+1); t=0; ans,res=0,0
    for i in range(1,n+1):
        if not dic[i]:
            tmp=t; j=i
            while not dic[j]: dic[j]=t; t+=1; j=a[j-1]
            if dic[j]<tmp: continue
            if t-dic[j]==2: ans+=1
            else: res+=1
    print(res+int(ans>0), res+ans)

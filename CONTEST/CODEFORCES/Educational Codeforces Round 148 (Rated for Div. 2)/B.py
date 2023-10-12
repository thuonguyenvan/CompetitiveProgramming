import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n,k=R();a=sorted(R());pre=[0]*(n+1);res=0
    for i in range(n): pre[i]=pre[i-1]+a[i]
    for i in range(k+1): res=max(res,pre[n-1]-(pre[n-1]-pre[n-1-k+i])-pre[2*i-1])
    print(res)
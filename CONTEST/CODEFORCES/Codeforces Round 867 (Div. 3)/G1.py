import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
cnt=[0]*(1000000+1)
for _ in range(int(input())):
    n=int(input()); a=R(); res=0
    for i in a: cnt[i]+=1
    a=list(set(a))
    for i in a:
        res+=cnt[i]*(cnt[i]-1)*(cnt[i]-2)
        for j in range(2,1001):
            if i*j*j>10**6: break
            else: res+=cnt[i]*cnt[i*j]*cnt[i*j*j]
    for i in a: cnt[i]=0
    print(res)
import sys;input=sys.stdin.readline
R=lambda:list(map(int,input().split()))
for _ in  range(int(input())):
    n,k,a1,ak=R()
    l=0
    r=10**8
    ans=10**18
    cnt=0
    while l<=r:
        cnt+=1
        m1=l+(r-l)//100
        m2=r-(r-l)//100
        q=m1*k
        q2=m2*k
        if q>n: r=m1-1
        elif q2>n: r=m2-1
        else:
            coin=max(0,m1-ak)+max(0,n-q-a1)
            coin2=max(0,m2-ak)+max(0,n-q2-a1)
            if coin<coin2: ans=coin; r=m2-1
            else: ans=coin2; l=m1+1
        #print(l,r)
        #if cnt==20: break
    print(ans)

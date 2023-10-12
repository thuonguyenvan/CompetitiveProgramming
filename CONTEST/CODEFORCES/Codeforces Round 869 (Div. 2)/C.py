n,q=map(int,input().split())
a=list(map(int,input().split()))
res=[0]*(n)+[0]
for i in range(2,n):
    res[i]=res[i-1]
    if a[i-2]>=a[i-1]>=a[i]:
        res[i]+=1
for i in range(q):
    l,r=map(int,input().split())
    ans=r-l+1
    print(ans if ans<3 else ans-res[r-1]+res[l] )

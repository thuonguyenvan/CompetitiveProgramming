n=int(input())
a=[0]+list(map(int,input().split()))
k,l,ans=0,1,0
mp={}
for r in range(1,n+1):
    k=a[r]
    if mp.get(k):
        ans=max(ans,r-l)
        l=max(l,mp[k]+1)
        mp[k]=r
    else:
        ans=max(ans,r-l+1)
        mp[k]=r
ans=max(n-l+1,ans)

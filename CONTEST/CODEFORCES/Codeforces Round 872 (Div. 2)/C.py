for _ in range(int(input())):
    n,m=map(int,input().split())
    a=list(map(int,input().split()))
    cnt1,cnt2=a.count(-1), a.count(-2); pos=[]
    if cnt1+cnt2==n: print(min(m, max(cnt1,cnt2))); continue
    for i in a:
        if i>0: pos.append(i)
    pos=sorted(list(set(pos))); n=len(pos); ans=0
    for i in range(n):
        empty1=pos[i]-1-i; empty2=m-pos[i]-(n-i-1)
        ans=max(ans, n+min(empty1, cnt1)+min(empty2, cnt2))
    ans=min(m, max(ans, cnt1+n, cnt2+n))
    print(ans)
        

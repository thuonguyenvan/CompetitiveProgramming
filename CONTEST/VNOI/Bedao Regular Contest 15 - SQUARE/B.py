import sys;ip=sys.stdin.readline;R=lambda:list(map(int,ip().split()))
l,r=R()
ans=0
for i in range(10000):
    s=str(i)[::-1]
    if s[-1]=='0': continue
    t=str(i)+s
    n=len(t)
    for j in range(n):
        if l<=int(t)<=r: ans+=int(t[j])*(10**(n-j-1))
    for k in range(10):
        t=str(i)+str(k)+s
        n=len(t)
        for j in range(n):
            if l<=int(t)<=r:ans+=int(t[j])*(10**(n-j-1))
for i in range(10):
    if l<=i<=r: ans+=i
print(ans)

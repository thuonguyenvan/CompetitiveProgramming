import sys;input=sys.stdin.readline;R=lambda:[int(i) for i in input().strip()]
for _ in range(int(input())):
    s,m,l,r=R(), int(input()), R(), R(); idx=0; n=len(s)
    for i in range(m):
        tidx=idx
        for j in range(l[i],r[i]+1):
            t=idx
            while t<n and s[t]-j: t+=1
            tidx=max(tidx,t)
        idx=tidx+1
    print('YES' if idx>n else 'NO')
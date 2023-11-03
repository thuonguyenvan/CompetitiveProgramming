import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    a,b,c=R()
    res=[min(a,b,c)]
    cnt=0
    m=min(a,b,c)
    for i in [a,b,c]:
        t=i
        while t>m and cnt<4:
            res.append(m)
            t-=m
            cnt+=1
        res.append(t)
    if len(set(res))-1 or cnt>3: print("NO")
    else: print("YES")
        
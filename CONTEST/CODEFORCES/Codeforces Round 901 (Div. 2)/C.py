import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n,m=R()
    cnt=0
    cur=n%m
    res=0
    while cur and cnt<1e3:
        res+=cur
        cur=(cur*2)%m
        cnt+=1
    if cnt==1e3: print(-1)
    else: print(res)
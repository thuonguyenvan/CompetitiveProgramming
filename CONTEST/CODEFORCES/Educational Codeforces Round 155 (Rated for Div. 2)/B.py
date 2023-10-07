import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n=int(input())
    a=R()
    b=R()
    ma=min(a)
    mb=min(b)
    res=0
    ans=0
    for i in range(n):
        res+=a[i]+mb
        ans+=b[i]+ma
    print(min(res,ans))

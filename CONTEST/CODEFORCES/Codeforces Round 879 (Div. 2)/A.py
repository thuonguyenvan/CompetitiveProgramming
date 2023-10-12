import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n=int(input()); a=R()
    ct1=a.count(-1); c1=n-ct1
    res=0
    while ct1%2 or ct1>c1:
        ct1-=1
        c1+=1
        res+=1
    print(res)

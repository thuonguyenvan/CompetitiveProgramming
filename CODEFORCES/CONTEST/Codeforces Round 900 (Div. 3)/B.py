import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n=int(input())
    i=1
    res=[]
    while len(res)!=n:
        res.append(i)
        i+=2
    print(*res)
        

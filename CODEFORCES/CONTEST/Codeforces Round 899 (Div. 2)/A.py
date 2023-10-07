import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n=int(input())
    a=R()
    res=[0]
    for i in range(n):
        if res[-1]+1!=a[i]: res.append(res[-1]+1)
        else: res.append(res[-1]+2)
    print(res[-1])

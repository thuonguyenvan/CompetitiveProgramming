import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n=int(input())
    a=[R() for i in range(n)]
    for i in range(1,n):
        if a[i][0]>=a[0][0] and a[i][1]>=a[0][1]: print(-1); break
    else: print(a[0][0])

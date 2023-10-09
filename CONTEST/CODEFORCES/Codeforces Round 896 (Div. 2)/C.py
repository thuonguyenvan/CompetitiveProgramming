import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n,m=R()
    if m==1:
        for i in range(n+1): print(0)
        continue
    if n<m:
        print(n+1)
        for i in range(n):
            print(*[j for j in range(i,m)]+[j for j in range(i)])
    else:
        print(m)
        res=[]
        for i in range(m-1):
            res=[j for j in range(i,m)]+[j for j in range(i)]
            print(*res)
        for i in range(n-m+1):
            print(*res)

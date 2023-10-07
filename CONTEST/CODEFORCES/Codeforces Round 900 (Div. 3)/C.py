import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n,k,x=R()
    if x<(k*(k+1)//2)  : print('NO'); continue
    if (n*(n+1)//2) - ((n-k)*(n-k+1))//2<x: print('NO'); continue
    print('YES')

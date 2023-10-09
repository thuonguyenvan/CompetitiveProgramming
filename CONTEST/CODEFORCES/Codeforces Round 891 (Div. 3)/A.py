import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n=int(input())
    a=R()
    o,e=0,0
    for i in a:
        if i%2: o+=1
        else: e+=1
    if o%2==0: print('YES')
    else: print('NO')

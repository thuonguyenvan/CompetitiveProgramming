import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n=int(input())
    a=R()
    res=[a[0]]
    for i in range(1,n):
        if a[i]>=res[-1]: res.append(a[i])
        else: res.append(a[i]); res.append(a[i])
    print(len(res))
    print(*res)
        
    

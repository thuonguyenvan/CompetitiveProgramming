import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n=int(input())
    res=[1,2]
    t=n-sum(res)
    if t%3 and t>0 and t not in res:
        res.append(t)
        print('YES')
        print(*res)
        continue
    res=[1,4]
    t=n-sum(res)
    if t%3 and t>0 and t not in res:
        res.append(t)
        print('YES')
        print(*res)
        continue
    print('NO')
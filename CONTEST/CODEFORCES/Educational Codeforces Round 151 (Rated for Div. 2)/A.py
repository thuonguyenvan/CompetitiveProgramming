import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n,k,x=R()
    res=[]
    if x==1:
        if n%2:
            res+=[2]*((n-3)//2)+[3]
        else: res+=[2]*(n//2)
    else:
        res=[1]*(n)
    if max(res)>k: print('NO'); continue
    if sum(res)==n:
        print('YES')
        print(len(res))
        print(*res)
    else: print('NO')

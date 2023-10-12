import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
def non_rec_dfs(a,n):
    stack=[1]
    vs=[0]*(n+1)
    res=[0]*(n+1)
    while stack:
        n=stack[-1]
        if not vs[n]:
            vs[n]=1
            for i in a[n]:
                if not vs[i]: stack.append(i)
            continue
        t=stack.pop()
        l=0
        for i in a[t]: l+=res[i]
        res[t]+=l+int(l==0)
    return res
for _ in range(int(input())):
    n=int(input())
    a=[[] for i in range(n+1)]
    for i in range(n-1):
        x,y=R()
        a[x].append(y)
        a[y].append(x)
    res=non_rec_dfs(a,n)
    for i in range(int(input())):
        v,u=R()
        print(res[u]*res[v])
            

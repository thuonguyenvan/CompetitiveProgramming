import sys;input=sys.stdin.readline 
R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n,m=R()
    graph=[[] for i in range(n+1)]
    for i in range(m):
        a,b,d=R()
        graph[a].append([b,d])
        graph[b].append([a,-d])
    vs=[0]*(n+1)
    pos=[0]*(n+1)
    check=1
    for i in range(1,n+1):
        if vs[i]: continue
        vs[i]=1
        stack=[i]
        while stack:
            v=stack.pop()
            for u,d in graph[v]:
                if vs[u]:
                    if pos[v]+d!=pos[u]: check=0
                    continue
                vs[u]=1
                stack.append(u)
                pos[u]=pos[v]+d
            if not check: break
    print(['No', 'Yes'][check])
            

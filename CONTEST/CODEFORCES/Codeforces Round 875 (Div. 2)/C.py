import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for i in range(int(input())):
    n = int(input())
    a = [[] for x in range(n + 1)]
    for j in range(n - 1):
        v, u = R()
        a[v].append([u, j])
        a[u].append([v, j])
    check = [0] * (n + 1)
    stack = [[1, 1, -1]]
    while stack:
        el, old, nom = stack.pop()
        check[el] = old
        for x in a[el]:
            if check[x[0]] > 0:
                continue
            if x[1] > nom:
                stack.append([x[0], old, x[1]])
            else:
                stack.append([x[0], old + 1, x[1]])
    print(max(check))

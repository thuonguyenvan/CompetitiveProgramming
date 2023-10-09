import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
def solve(n, a, b):
    res = []
    max_diff = float('-inf')
    
    for i in range(n):
        if a[i] - b[i] > max_diff:
            max_diff = a[i] - b[i]
            res = [i + 1]
        elif a[i] - b[i] == max_diff:
            res.append(i + 1)
    
    return res


for _ in range(int(input())):
    n = int(input())
    a = R()
    b=R()
    
    res = solve(n, a, b)
    
    print(len(res))
    print(*res)

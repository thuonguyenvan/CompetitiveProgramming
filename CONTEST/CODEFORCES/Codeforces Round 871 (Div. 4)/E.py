import sys;input = sys.stdin.readline;R = lambda: list(map(int, input().split()))
def solve(i, j):
    stack = [(i, j)]
    ans = a[i][j]
    done[i][j] = 0
    while stack:
        i, j = stack.pop()
        if i > 0 and done[i - 1][j]:
            ans += a[i - 1][j]
            done[i - 1][j] = 0
            stack.append((i - 1, j))
        if i < n - 1 and done[i + 1][j]:
            ans += a[i + 1][j]
            done[i + 1][j] = 0
            stack.append((i + 1, j))
        if j > 0 and done[i][j - 1]:
            ans += a[i][j - 1]
            done[i][j - 1] = 0
            stack.append((i, j - 1))
        if j < m - 1 and done[i][j + 1]:
            ans += a[i][j + 1]
            done[i][j + 1] = 0
            stack.append((i, j + 1))
    return ans
for _ in range(int(input())):
    n, m = map(int, input().split())
    a = []
    done = []
    res = 0

    for _ in range(n):
        a.append(R())
        done.append(list(a[-1]))

    for i in range(n):
        for j in range(m):
            if done[i][j]:
                res = max(res, solve(i, j))

    print(res)

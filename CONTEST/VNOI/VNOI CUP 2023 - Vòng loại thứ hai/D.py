n, m = map(int, input().split())
arr = []
for _ in range(n):
    arr.append(list(map(int, input().split())))

ans = 0
for i in range(n - 1):
    for j in range(m - 1):
        for k in range(i + 1, n):
            for l in range(j + 1, m):
                if arr[i][j] >= l - j and arr[i][l] >= k - i and arr[k][l] >= l - j and arr[k][j] >= k - i:
                    ans += 1

print(ans)

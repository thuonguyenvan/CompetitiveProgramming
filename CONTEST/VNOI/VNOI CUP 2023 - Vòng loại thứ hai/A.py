import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
n,m=R()
a=[]
check=0
for i in range(n):
    a.append(input())
for i in range(n-1):
    for j in range(m-1):
        if a[i][j]!=a[i+1][j] and a[i][j]!=a[i][j+1] and a[i+1][j]!=a[i+1][j+1] and a[i][j+1]==a[i+1][j+1]:
            print('YES'); check=1; break
    if check: break
if not check: print('NO')

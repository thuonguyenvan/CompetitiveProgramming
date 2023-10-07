import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n,k=R()
    a=R()
    print('YES' if k in a else 'NO')
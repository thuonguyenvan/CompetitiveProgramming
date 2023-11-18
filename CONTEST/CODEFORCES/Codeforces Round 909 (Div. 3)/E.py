import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
from math import log2
for _ in range(int(input())):
    n  = int(input())
    a = R()
    mn = min(a)
    idm = -1
    for i in range(n):
        if a[i] == mn: idm = i; break
    for i in range(idm + 1, n):
        if (a[i] < a[i - 1]): print(-1); break
    else: print(idm)
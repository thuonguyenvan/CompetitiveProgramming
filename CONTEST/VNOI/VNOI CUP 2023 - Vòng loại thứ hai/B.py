import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
from math import gcd
for _ in range(int(input())):
    n=int(input()); a=R(); res=[]
    for i in range(n):
        for j in range(i+1,n):
            res.append(gcd(a[i], a[j]))
    res.sort()
    print(res[-2])

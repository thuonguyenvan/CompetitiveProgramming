import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
from math import gcd
for _ in range(int(input())):
    n=int(input()); a=R(); g=[]
    for i in range(n//2): g.append(a[i]-a[n-i-1])
    print(gcd(*g))
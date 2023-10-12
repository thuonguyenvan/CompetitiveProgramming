from math import gcd
import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n=int(input())
    a=R()
    t=[]
    for i in range(n):
        t.append(abs(a[i]-i-1))
    print(gcd(*t))

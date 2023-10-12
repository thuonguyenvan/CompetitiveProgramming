import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
from math import gcd
for _ in range(int(input())):
    n,m=R(); res=(n<=m); s='YNEOS'
    for i in range(2,int(n**(1/2))+1):
        if n%i==0 and i<=m: res=1; break
    if n==1: res=0
    print(s[res::2]) 

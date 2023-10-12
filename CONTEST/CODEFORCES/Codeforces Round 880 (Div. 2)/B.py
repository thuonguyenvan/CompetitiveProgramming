import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
from math import ceil
for _ in range(int(input())):
    n,k,g=R()
    coins=k*g
    x=ceil(g/2)-1
    if n*x>=coins: print(coins); continue
    res=x*(n-1)
    coins-=x*(n-1)
    r=coins%g
   # print(res,coins,r)
    x=coins
    if r>=g/2: res+=coins-(x+g-r)
    else: res+=r
  #  print(coins-x-g+r)
    print(res)


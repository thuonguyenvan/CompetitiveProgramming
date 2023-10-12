import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
import math
from heapq import heappush as push, heappop as pop
from collections import Counter
from math import gcd, comb,ceil
from itertools import permutations
testcase=1; MOD=10**9+7; MAX=math.inf; MIN=-math.inf
testcase=int(input())
for _ in range(testcase):
    n=int(input()); a=[[] for i in range(n+1)]
    b=[]
    for i in range(n):
        x,y=R()
        push(a[x],-y)
        b.append(x)
    b=sorted(list(set(b)))
    lampon=0; res=0; broken=0; willbroken=0
    for i in b:
        willbroken=0
        while lampon<i and a[i]:
            res-=pop(a[i]); willbroken+=1; lampon+=1
            if lampon>=i: lampon-=broken; broken=0
        broken+=willbroken
    print(res)

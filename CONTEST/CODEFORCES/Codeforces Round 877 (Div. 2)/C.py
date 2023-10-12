import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
import math
from heapq import heappush as hpush, heappop as hpop
from collections import Counter
from math import gcd, comb,ceil
from itertools import permutations
testcase=1; MOD=10**9+7; MAX=math.inf; MIN=-math.inf
testcase=int(input())
for _ in range(testcase):
    n,m=R(); res=[[] for i in range(n+1)]; t=1
    for i in range(1,n+1):
        for j in range(1,m+1):
            res[i].append(t); t+=1
    for i in range(2,n+1,2):
        print(*res[i])
    for i in range(1,n+1,2):
        print(*res[i])
    
    

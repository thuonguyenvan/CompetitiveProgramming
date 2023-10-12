import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
import math
from heapq import heappush as push, heappop as pop
from collections import Counter
from math import gcd, comb,ceil
from itertools import permutations
testcase=1; MOD=10**9+7; MAX=math.inf; MIN=-math.inf
testcase=int(input())
for _ in range(testcase):
    n=int(input()); a=[0]+R(); res=[]; a.reverse(); p=0
    if a[0]: print('NO'); continue
    for i in range(1,n+1):
        if a[i]: p+=1
        if not a[i] and a[i]-a[i-1]: res.append(p); p=0
        else: res.append(0)
    print('YES'); print(*res)
        
    
    

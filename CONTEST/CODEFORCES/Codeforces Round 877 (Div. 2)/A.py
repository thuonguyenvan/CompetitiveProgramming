import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
import math
from heapq import heappush as hpush, heappop as hpop
from collections import Counter
from math import gcd, comb,ceil
from itertools import permutations
testcase=1; MOD=10**9+7; MAX=math.inf; MIN=-math.inf
testcase=int(input())
for _ in range(testcase):
    n=int(input()); a=R()
    if min(a)<0: print(min(a))
    else: print(max(a))

import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
import math
from collections import Counter
from math import gcd
from math import comb
from math import ceil
from itertools import permutations
testcase=1; MOD=10**9+7; MAX=math.inf; MIN=-math.inf
testcase=int(input())
for _ in range(testcase):
    n,k=R(); t=1; res=0
    while (t<n):
      #  print(t,res)
        t+=k; res+=1
    print(res+int((t-k)<n))

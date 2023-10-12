import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
import math
from heapq import heappush as hpush, heappop as hpop
from collections import Counter
from math import gcd, comb,ceil
from itertools import permutations
testcase=1; MOD=10**9+7; MAX=math.inf; MIN=-math.inf
testcase=int(input())
for _ in range(testcase):
    n=int(input()); a=R(); res=[]
    id1=a.index(1)+1; id2=a.index(2)+1; idm=a.index(max(a))+1
    if idm>id2>id1: res=[idm,id2]
    elif idm>id1>id2: res=[idm,id1]
    elif idm<id1<id2: res=[idm,id1]
    elif idm<id2<id1: res=[idm,id2]
    else: res=[1,1]
    print(*res)
    
    
    

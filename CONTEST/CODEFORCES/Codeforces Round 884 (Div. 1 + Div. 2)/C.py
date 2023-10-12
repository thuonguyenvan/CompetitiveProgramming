import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
from heapq import heappush as push, heappop as pop
from collections import Counter, deque, defaultdict
from math import gcd, comb,ceil, inf
from itertools import permutations
from bisect import bisect_right
def _const():global MOD, MAX, MIN; MOD=10**9+7; MAX=inf; MIN=-inf
_const()

############################################################################################

def main():
    #--------
    n=int(input())
    a=R()
    dp=[MIN]*(n+1)
    for i in range(n):
        dp[i]=max(a[i],a[i]+dp[i-2],dp[i-2])
    print(max(dp))
    return 0
    

############################################################################################

if __name__=="__main__":
    testcase=1
    testcase=int(input())
    for tc in range(testcase):
        main()

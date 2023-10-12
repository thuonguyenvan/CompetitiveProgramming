import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
#sys.setrecursionlimit(170000)
from heapq import heappush as push, heappop as pop
from collections import Counter, deque, defaultdict
from math import gcd, comb, ceil, inf
from itertools import permutations
from bisect import bisect_right
def _const():global MOD, MAX, MIN; MOD=10**9+7; MAX=inf; MIN=-inf
_const()
############################################################################################


def main():
    #--------
    n,m=R()
    segs=[R() for i in range(m)]
    q=int(input())
    x=[int(input()) for i in range(q)]
    l=0; r=q
    while r>l:
        m=(l+r)//2
        a=[0]*(n+1)
        for i in x[:m+1]: a[i]=1
        for i in range(1,n+1): a[i]+=a[i-1]
        for i in segs:
            u,v=i
            if a[v]-a[u-1]>(v-u+1)//2:
                r=m
                break
        else: l=m+1
    print(r+1 if r<q else -1)
        


############################################################################################

if __name__=="__main__":
    testcase=1
    testcase=int(input())
    for tc in range(testcase):
        main()

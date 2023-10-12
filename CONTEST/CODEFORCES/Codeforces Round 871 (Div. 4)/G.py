import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
from heapq import heappush as push, heappop as pop
from collections import Counter, deque, defaultdict
from math import gcd, comb,ceil, inf
from itertools import permutations
from bisect import bisect_right
def _const():global MOD, MAX, MIN; MOD=10**9+7; MAX=inf; MIN=-inf
_const()
############################################################################################
res=[1]*(10**6+1)
cnt=2
i=2
while i<10**6+1:
    for j in range(cnt):
        if i+j>10**6: break
        res[i+j]=(i+j)**2
        t1=i+j-cnt
        t2=i+j-cnt+1
        if j!=0: res[i+j]+= res[t1]
        if j!=cnt-1: res[i+j]+=res[t2]
        if j!=0 and j!=cnt-1: res[i+j]-=res[i+j-2*(cnt-1)]
    i+=cnt
    cnt+=1
    
def main():
    #--------
    print(res[int(input())])

############################################################################################

if __name__=="__main__":
    testcase=1
    testcase=int(input())
    for tc in range(testcase):
        main()

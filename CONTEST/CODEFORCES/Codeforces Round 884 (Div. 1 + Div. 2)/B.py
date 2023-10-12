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
    res=[]
    for i in range(1,n+1):
        res.append(i)
    if n<3: print(*res); return
    if n==3: print(2,1,3); return
    res[2],res[n-1]=res[n-1],res[2]
    res[0],res[n//2]=res[n//2], res[0]
    res[1],res[0]=res[0],res[1]
    print(*res)
    

############################################################################################

if __name__=="__main__":
    testcase=1
    testcase=int(input())
    for tc in range(testcase):
        main()

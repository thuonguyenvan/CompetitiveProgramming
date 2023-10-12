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
    res=''
    t=2
    while not n%t: t+=1
    for i in range(n): print(chr(97+i%t), end='')
    print()
    

############################################################################################

if __name__=="__main__":
    testcase=1
    testcase=int(input())
    for tc in range(testcase):
        main()
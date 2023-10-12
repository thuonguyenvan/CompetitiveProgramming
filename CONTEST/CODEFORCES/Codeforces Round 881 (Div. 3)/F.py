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
class info:
    mn_suf=0
    mx_cuf=0
    mn_ans=0
    mx_ans=0

def main():
    #--------
    n = int(input())
    start = info()
    start.mx_suf = start.mx_ans = 1  
    st = [start]
    for i in range(n):
        com = input().split()
        if (com[0] == '+'):
            v = int(com[1]) - 1
            x = int(com[2])
            pref = st[v]
            cur = info()
            cur.mn_suf = min(0, pref.mn_suf + x)
            cur.mx_suf = max(0, pref.mx_suf + x)
            cur.mn_ans = min(pref.mn_ans, cur.mn_suf)
            cur.mx_ans = max(pref.mx_ans, cur.mx_suf)
            st.append(cur)
        else:
            v = int(com[2]) - 1
            x = int(com[3])
            print(['NO', 'YES'][int(st[v].mn_ans <= x <= st[v].mx_ans)]) 


############################################################################################

if __name__=="__main__":
    testcase=1
    testcase=int(input())
    for tc in range(testcase):
        main()

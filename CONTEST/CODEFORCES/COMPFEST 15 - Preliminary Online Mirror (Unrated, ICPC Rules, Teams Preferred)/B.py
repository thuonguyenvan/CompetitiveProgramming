import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
from math import comb
mod=998244353
n=int(input())
snta=R()
lta=R()
m=int(input())
sntb=R()
ltb=R()
cnt=0
check=[0]*(2*10**6+1)
for i in range(m):
    check[sntb[i]]=ltb[i]
for i in range(n):
    lta[i]-=check[snta[i]]
    if lta[i]>0: cnt+=1
    check[snta[i]]=0
if min(lta)<0 or max(check)>0: print(0)
else:
    print((2**cnt)%mod)
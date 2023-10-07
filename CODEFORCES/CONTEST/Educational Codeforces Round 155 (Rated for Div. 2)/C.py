import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
mod=998244353
from math import comb
for _ in range(int(input())):
    s=[int(i) for i in input().strip()]+[2]
    n=len(s)
    res=0
    ans=1
    cnt=1
    for i in range(1,n):
        if s[i]==s[i-1]: res+=1; cnt+=1
        else:
            ans*=cnt
            ans%=mod
            cnt=1
    for i in range(1,res+1):
        ans*=i
        ans%=mod
    print(res,ans)

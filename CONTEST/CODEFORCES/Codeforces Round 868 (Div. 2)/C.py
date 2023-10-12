from collections import defaultdict
import math
CONST = 10**7+1
dp=[0]*(CONST)
for i in range(2,CONST):
    if dp[i]==0:
        for j in range(i,CONST,i):
            dp[j]=i
 
 
for _ in range(int(input())):
    n=int(input())
    p=list(map(int,input().split()))
    d=defaultdict(int)
    for i in p:
        while i!=1:
            d[dp[i]]+=1
            i//=dp[i]
    res,k=0,0
    for i in d:
        res+=d[i]//2
        if d[i]%2:
            k+=1
    print(res+k//3)
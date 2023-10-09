import sys;input=sys.stdin.readline
R=lambda:list(map(int,input().split()))
from itertools import permutations
from math import gcd

for _ in range(int(input())):
    n=int(input())
    check=[0]*(n+1)
    res=[]
    t=1
    for i in range(1,n+1):
        t=i
        while True:
            if not check[t]: res.append(t)
            check[t]=1
            t*=2
            if t>n: break
    print(*res)
        
    
'''
a=R()
p=[i+1 for i in range(7)]
d=[]
for i in range(7):
    d.append(gcd(a[i], a[(i+1)%7]))
res=len(list(set(d)))
perms=permutations(p)
cnt=0
print(d)
print(res)
for pe in perms:
    cnt+=1
    d=[]
    for i in range(7):
        d.append(gcd(pe[i], pe[(i+1)%7]))
    t=len(list(set(d)))
    if pe[-1]!=7: continue
    if t==res:
        print(t)
        print(pe)
        print(d)
        break
  #  if cnt==7700: break
'''
    

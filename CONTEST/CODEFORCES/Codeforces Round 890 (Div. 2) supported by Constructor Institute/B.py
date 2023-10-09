import sys;input=sys.stdin.readline 
R=lambda:list(map(int,input().split()))
from random import randint
RANDOM = randint(1, 10 ** 9)
from collections import Counter, deque, defaultdict

'''  
for _ in range(int(input())):
  n=int(input())
  a=R()
  b=[]
  for i in range(n-1):
    if a[i]==1: b.append(2)
    else: b.append(1)
  b.append(sum(a)-sum(b))
  if b[-1]>10**9:
    s=(10**9-2)*(n-1)
    if s<b[-1]-10**9:
      print('NO')
      continue
  if b[n-1]!=a[n-1] and b[n-1]>0: print('YES')
  else: print('NO')
    
  
'''
for _ in range(int(input())):
  n=int(input())
  a=R()
  b=[]
  c1=a.count(1)
  s=sum(a)
  if s-n>=c1 and n!=1: print('Yes')
  else: print('NO')

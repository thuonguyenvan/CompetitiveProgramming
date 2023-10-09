import sys;input=sys.stdin.readline 
R=lambda:list(map(int,input().split()))
from itertools import permutations
'''
p=[i for i in range(1,11)]
perms=permutations(p)
s=0
mx=-1
for t in  perms:
    for i in range(10):
        mx=max(mx,t[i]*(i+1))
        s+=t[i]*(i+1)
    if s-mx==303:
        print(t)
    s=0
    mx=-1


'''
for _ in range(int(input())):
  n=int(input())
  t=0
  res=0
  for j in range(251):
      temp=min(n,t+j)
      p=[0]+[i+1 for i in range(temp)]
      p+=[i for i in range(n,p[-1],-1)]
      #print(p)
      mx=-1
      s=0
      for i in range(n+1):
          q=(i)*p[i]
          mx=max(mx,q)
          s+=q
      res=max(res,s-mx)
  print(res)
    
      
      
      
      
              
      
      
    

import sys;input=sys.stdin.readline 
R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
  n=int(input())
  a=R()
  mn=min(a)
  b=[mn]*(a.count(mn))
  c=[]
  for i in  a:
      if i!=mn: c.append(i)
  if not c:
      print(-1)
  else:
      print(len(b),len(c))
      print(*b)
      print(*c)
  
    
  
'''
1
7
1 7 7 2 9 1 4

'''

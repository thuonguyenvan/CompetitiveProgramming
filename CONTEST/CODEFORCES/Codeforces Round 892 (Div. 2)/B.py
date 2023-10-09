import sys;input=sys.stdin.readline 
R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
  n=int(input())
  mn=[]
  sc=[]
  for i in range(n):
      m=(int(input()))
      a=sorted(R())
      mn.append(a[0])
      sc.append(a[1])
  res=min(mn)
  sc.sort()
  sc=sc[1:]
  print(res+sum(sc))
      
              
      
      
      
      
    
  
'''
1
7
1 7 7 2 9 1 4

'''

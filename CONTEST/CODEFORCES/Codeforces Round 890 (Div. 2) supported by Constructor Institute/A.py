import sys;input=sys.stdin.readline 
R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
  n=int(input())
  a=R()
  res=0
  if a==sorted(a):
    print(0)
    continue
  else:
    b=sorted(a)
    for i in range(n):
      if a[i]!=b[i]: res=max(res,a[i])
    print(res)
  

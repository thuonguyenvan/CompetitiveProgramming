import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n=int(input())
    a=R()
    b=[[v,k] for k,v in enumerate(a)]
  #  print(b)
    b.sort()
    dic={}
    for i in range(n): dic.setdefault(b[i][1],n-i)
    #print(dic)
    for i in range(n): print(dic[i], end=' ')
    print()

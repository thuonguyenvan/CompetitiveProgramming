import sys;input=sys.stdin.readline
R=lambda:list(map(int,input().split()))
for _ in  range(int(input())):
    m1=m2=int(input())+1
    a=R()
    res=0
    for i in a:
        if i<m1: m1=i
        elif i<m2: m2=i; res+=1
    print(res)

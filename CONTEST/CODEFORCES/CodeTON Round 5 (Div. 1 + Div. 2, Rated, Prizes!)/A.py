import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n,m=R()
    a=sorted(R())
    b=sorted(R())
    t1=sum(a); t2=sum(b)
    
    if t1>t2: print('Tsondu')
    elif t1<t2: print('Tenzing')
    else: print('Draw')
    

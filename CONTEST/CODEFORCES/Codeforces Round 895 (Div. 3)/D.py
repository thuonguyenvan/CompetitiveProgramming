import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
from math import gcd
for _ in range(int(input())):
    n,x,y=R()
    t=n//((x*y)//gcd(x,y))
    t1=n//x-t
    t2=n//y-t
    a1=n-t1+1
    a2=t2
    print(int((n+a1)*(n-a1+1)//2 - (a2+1)*a2//2))
    
        

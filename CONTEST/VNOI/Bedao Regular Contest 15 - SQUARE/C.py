import sys;ip=sys.stdin.readline;R=lambda:list(map(int,ip().split()))
from math import lcm
n=int(input())
a=R()
ans=0
i=1
while i<n:
    t=lcm(a[i-1],a[i])
    if int(t**(1/2))-t**(1/2)==0:i+=1
    else: ans+=1; i+=2
    
print(ans)

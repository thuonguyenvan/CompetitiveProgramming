import sys;ip=sys.stdin.readline;R=lambda:list(map(int,ip().split()))
from math import lcm
l,r,k=R()
#and: &
#xor: ^
ans=0
for i in range(l,r+1):
    for j in range(i+1,r+1):
        if (i&j)%k==(i^j)%k  :     
            ans+=1
print(ans%(1000000007))

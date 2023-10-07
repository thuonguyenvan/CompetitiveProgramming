from math import gcd
import sys;ip=sys.stdin.readline;R=lambda:list(map(int,ip().split()))
n=int(input())
ans=[]
for i in range(n-1):
    ans.append(i+1)
s=sum(ans)
i=n
while int((s+i)**(1/2))-(s+i)**(1/2)!=0:
    i+=1
ans+=[i]
print(*ans)

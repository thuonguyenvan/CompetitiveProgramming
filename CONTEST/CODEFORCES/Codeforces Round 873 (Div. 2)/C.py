from math import gcd
import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n=int(input())
    a=sorted(R()); b=sorted(R())+[99999999999999999999]
    i=0; cnt=0; check=0
    ans=1
    while i<n:
        for j in range(check,n+1):
            if b[j]<a[i]: cnt+=1
            else:
                check=j
                break
        ans*=(cnt-i)
        ans=ans%1000000007
        i+=1
    print(ans)
    
    

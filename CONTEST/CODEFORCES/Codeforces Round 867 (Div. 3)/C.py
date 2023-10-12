#import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n=int(input())
    ans=n*4+n-1
    if n-2>=2:
        ans+=(n-2-2+1)*(n-2+2)
        ans//2
    print(ans+3)
    
    

import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n=int(input()); a=sorted(R()); res=0
    for i in range(n//2): res+=abs(a[i]-a[n-i-1])
    print(res)
        

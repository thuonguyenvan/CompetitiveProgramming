import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n=int(input()); a=R()
    if n==1: print(a[0]); continue
    ind=a.index(n-1 if n==a[0] else n)
    if ind==n-1: ind=n
    l=ind-2
    while l>0 and a[l]>a[0]: l-=1
    ans=a[ind:]+a[l+1:ind][::-1]+a[:l+1]
    print(*ans)

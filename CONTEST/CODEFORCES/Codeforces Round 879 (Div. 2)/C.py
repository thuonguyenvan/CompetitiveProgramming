import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n=int(input())
    s=input().strip()
    t=input().strip()
    cnt1,cnt2=0,0
    for i in range(n):
        if s[i]!=t[i]: cnt1+=1
        if s[i]!=t[n-i-1]: cnt2+=1
    t=min(cnt1,cnt2)
    res=10**18
    if not cnt1: print(0); continue
    if not cnt2: print(2); continue
    res=min(2*cnt1-cnt1%2, 2*cnt2-int(cnt2%2==0))
    print(res)

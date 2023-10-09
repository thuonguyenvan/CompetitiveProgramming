import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n=int(input())
    s=[int(i) for i in input().strip()]
    cnt=0
    for i in range(n//2):
        if s[i]!=s[n-i-1]: cnt+=1
    res=[0]*(n+1)
    #print(cnt)
    if n&1:
        for i in range(cnt,n//2+1): res[i]=1
    else:
        for i in range(cnt,n//2+1,2): res[i]=1
       # print(i,end=' ')
   # print(res)
    ans=res[:n//2+1]
    for i in range(n//2-int(n%2==0),-1,-1): ans.append(res[i])
    for i in ans: print(i,end='')
    print()

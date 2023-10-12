import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
dic={}
for i in range(2,1000001):
    t=1+i+i*i
    d=3
    while t<10**18+1:
        dic.setdefault(t,1)
        t+=i**d; d+=1
for _ in range(int(input())):
    n=int(input())
    try:
        dic[n]
        print('YES')
    except:
        l=2; r=10**18; p=0;
        while l<=r:
            m=(l+r)//2
            p=m*m+m+1
            if p==n: break
            if p<n: l=m+1
            else: r=m-1
        if p==n: print('YES')
        else: print('NO')

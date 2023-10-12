for _ in range(int(input())):
    n,m=map(int,input().split())
    a=sorted(list(map(int,input().split())))
    mn1,mn2,mx1,mx2=a[0],a[1],a[-1],a[-2]
    if n>m:
        t=m;
        m=n;
        n=t;
    ans=(mx1-mn1)*(n*(m-1))+(mx2-mn1)*(n-1)
    ans=max(ans, (mx1-mn1)*(n*(m-1))+(mx1-mn2)*(n-1))
    ans=max(ans, (mx2-mn1)*(n*(m-1))+(mx1-mn1)*(n-1))
    ans=max(ans, (mx1-mn2)*(n*(m-1))+(mx1-mn1)*(n-1))
    print(ans)

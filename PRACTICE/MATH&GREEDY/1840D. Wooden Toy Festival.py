#https://codeforces.com/contest/1840/problem/D
for _ in  range (int(input())):
    n=int(input())
    a=sorted(list(map(int,input().split())))
    l,r,res=0,a[-1],0
    while l<=r:
        m=(l+r)//2
        t1=a[0]+m
        t2=a[-1]-m
        i,j=0,n-1
        while abs(a[i]-t1)<=m and i<n-1: i+=1
        while abs(a[j]-t2)<=m and j>0: j-=1
        if j<i:
            res=m
            r=m-1
            continue
        t=(a[i]+a[j])//2
        if abs(a[i]-t)>m or abs(a[j]-t)>m:
            l=m+1
        else:
            res=m
            r=m-1
    print(res)

import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n,k=R()
    a=R()
    check=[0]*(n+2)
    for i in a: check[i]=1
    mex=0
    for i in range(n+2):
        if not check[i]: mex=i; break
    t=k%(n+1)
    #k=1 thi mat so n
    #k=2 thi mat so n-1
    #k=k mat so n-k va thay so a[k-1]=mex
    #day tat ca cac so phia truoc k len

    if n==1:
       # print(a[0])
        if a[0]==0:
            if k%2: print(1)
            else: print(0)
        else:
            if k%2: print(0)
            else: print(1)
    else:
       # print(mex,t, k)
        res=[0]*(n)
        res[t-1]=mex
        for i in range(t-1):
            res[i]=a[n-t+i+1]
        #    print(res)
        for i in range(t,n):
            res[i]=a[i-t]
        print(*res)
        
    

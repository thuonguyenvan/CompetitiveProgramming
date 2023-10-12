import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n=int(input()); a=(R()); s=0; res=0
    for i in a:
        s+=abs(i)
    a=[1]+a+[1]
    for i in range(n+1):
        if a[i+1]==0: a[i+1]=a[i]
    for i in range(1,n+2):
        if a[i]<0 and a[i+1]>0:
           # print(a[i])
            res+=1
    print(s,res)
    

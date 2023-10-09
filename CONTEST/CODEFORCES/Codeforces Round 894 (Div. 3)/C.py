import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n=int(input())
    a=R()+[0]
    b=[]
    i=0
    t=n
    while i<n:
   
        x=min(n-i, a[t-1]-a[t])
       # print(t, x)
        b+=[t]*x
        i+=x
        t-=1
        if t<0: break
       # print(b)
    b+=[0]
   # print(b)
    print('Yes' if a==b else 'No')
    

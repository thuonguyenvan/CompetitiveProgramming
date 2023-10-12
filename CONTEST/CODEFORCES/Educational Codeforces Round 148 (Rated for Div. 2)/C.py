import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n=int(input())
    check=[0]*(n+1)
    a=R()
    cnt=0
    for i in range(n-1):
        if a[i]==a[i+1]: cnt+=1; a[i]=-1
    t=[]
    for i in a:
        if i!=-1: t.append(i)
    a=t
    
    cnt=0
    n=len(a)
   # print(a)
    for i in range(n-2):
        if a[i]<=a[i+1]<=a[i+2] or a[i]>=a[i+1]>=a[i+2] and i+1!=n-1:
            cnt+=1
    print(len(a)-cnt)
















'''

for _ in range(int(input())):
    n,k=R()
    a=sorted(R())
    check=[1]*n
    print(a)
    res=sum(a)
    for i in range(0,2*k,2):
        a[i+1]=a[i]+a[i+1]
        check[i]=0
    ans=[]
    for i in range(n):
        if check[i]: ans.append(a[i])
    print(ans)
    '''
        
        

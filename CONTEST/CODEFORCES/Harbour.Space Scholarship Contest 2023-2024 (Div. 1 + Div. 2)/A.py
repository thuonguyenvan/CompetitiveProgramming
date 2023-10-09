import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    x,y,n=R()
    a=[y]
    t=1
    for i in range(n-2):
        a.append(a[-1]-t)
        t+=1
    a.append(x)
    a.reverse()
    b=[]
   # print(a)
    for i in range(n-1): b.append(a[i+1]-a[i])
    #print(b)
    b.reverse()
    check=0
    ax=sorted(a)
    bx=sorted(b)
    for i in range(n-1):
        if a[i]==a[i+1]: check=1
    for i in range(n-2):
        if b[i]==b[i+1]: check =1
    if a==ax and b==bx and check==0: print(*a)
    else: print(-1)
        

for _ in range(int(input())):
    n=int(input())
    ans=[n]
    b=[0]*(n+1)
    cup=n-1
    cdown=1
    check=0
    for i in range(n-1):
        t=0
        if i%2==0:
            t=cup-check
            ans.append(t)
            check=cup
            cup-=1
            b[t]=1
        else:
            t=cdown-check+n
            ans.append(t)
            check=cdown
            cdown+=1
            b[t]=1
       # print(t)
   # print(ans)
   # print(b)
    if b.count(0)>2:
        print(-1)
    else: print(*ans)
        

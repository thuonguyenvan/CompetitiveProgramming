for _ in range(int(input())):
    n=int(input())
    ans=0
    a=list(map(int,input().split()))
    cnt=[0]*(n+1)
    for i in a:
        cnt[i]+=1
    b=sorted(list(set(a)))
    d=0
   
    for i in b:
        if i>(n-cnt[i]-d): break
        d+=cnt[i]
    ans=n-d

    if i<=ans and i!=0: print(-1)
    else: print(ans)
    
            
    
            

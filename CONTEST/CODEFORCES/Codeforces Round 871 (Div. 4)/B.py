for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))+[1]
    ans=0
    t=1
    if a.count(0)==0: print(0); continue
    for i in range(n+1):
        if a[i]==a[i-1]==0:
            t+=1
        else:ans=max(ans,t); t=1
    print(ans)
            
            


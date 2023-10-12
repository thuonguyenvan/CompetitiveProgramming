for _ in range(int(input())):
    n,t=map(int,input().split())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    ans,mx, cnt=0,0,0
    for i in range(n):
        if a[i]+cnt<= t and max(mx,b[i])==b[i]:
           # print(a[i], t-cnt, b[i])
            mx=b[i]
            ans=i+1
        cnt+=1
    print(ans if ans else -1)

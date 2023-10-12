import heapq
for _ in range(int(input())):
    n,c,d=map(int,input().split())
    a=sorted(list(map(int,input().split())))
    add=remove=0
    a.append(0)
    for i in range(n):
        if a[i]>a[i-1]:
            add+=(a[i]-a[i-1]-1)*d
        else:
            remove+=c
    ans=min(add+remove, c*n+d)
    for i in range(n-1,0,-1):
        if a[i]!=a[i-1]:
            remove+=c
            add-=d*(a[i]-a[i-1]-1)
            ans = min(ans, add + remove)
    print(ans)
            
        
            
            
            
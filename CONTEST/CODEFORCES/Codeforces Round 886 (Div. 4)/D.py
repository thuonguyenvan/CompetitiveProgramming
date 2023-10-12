import sys;input=sys.stdin.readline
R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n,k=R()
    a=R()
    a.sort()
   # print(a)
    cnt=1
    res=[]
    for i in range(1,n):
        if a[i]-a[i-1]>k: res.append(cnt); cnt=1
        else:cnt+=1
    res.append(cnt)
    print(n-max(res))
    
    
        
            

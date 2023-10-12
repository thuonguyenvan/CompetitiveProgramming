from collections import Counter
for _ in range(int(input())):
    n,m=map(int,input().split())
    cnt=[0]*(n+1)
    for i in range(m):
        a=list(map(int,input().split()))
        cnt[a[0]]+=1
        cnt[a[1]]+=1
    #print(cnt)
    cnt=dict(Counter(cnt))
    del cnt[0]
 #   print(cnt)
    ans=[]
    cnt2={}
    for i in cnt:
        cnt2.setdefault(cnt[1], i)
        ans.append([cnt[i], i])
    ans.sort()
   # print(ans)
    x,y=0,0
    if len(ans)==2:
        check=0
        for i in ans:
            if i[0]==1:
                check=1
                x=1
        if check:
            for i in ans:
                if i[1]!=1:
                    y=i[1]-1
        
        else:
            for i in ans:
                if i[1]!=1:
                    x=i[0]-1
                    y=i[0]-2
    else:
        x=ans[0][1]
        y=ans[1][1]-1
    print(x,y)
        
        
    
            
            
        
        
    
    
    



for _ in range(int(input())):
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    b=[0]*(n+1)
    cnt=0
    dau=[]
    for i in range(n):
        b[a[i]]=i+1
    for i in a:
        if (b[i]-i)%k:
            cnt+=1
            dau.append(i)
            dau.append(b[i])
  #  print(dau)
    if cnt==0: print(cnt)
    elif (dau[-1]-dau[0])%k==0 and cnt<3:
        print(cnt-1)
    else: print(-1)
    
        

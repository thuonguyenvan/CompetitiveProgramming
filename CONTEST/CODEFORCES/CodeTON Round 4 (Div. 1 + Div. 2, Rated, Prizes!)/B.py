for _ in range(int(input())):
    n=int(input())
    ans=[]
    t=k=0
    if n%2==0:
        print(-1)
    else:
        while(n//2!=1):
            k=n//2
            if k%2 and n!=3:
                ans.append(2)
                n=n//2
            else:
                if n!=3:
                    ans.append(1)
                    n=n//2+1
        if n==1:
            ans.append(1)
        else:
            ans.append(2)
        ans.reverse()
        print(len(ans))
        print(*ans)
            
        
    
        

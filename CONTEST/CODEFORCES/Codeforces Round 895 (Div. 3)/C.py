import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    l,r=R()
    if r<4: print(-1)
    elif r>l or r%2==0:
        t=r-r%2
        print(2,t-2)
    else:
        for i in range(3,int(r**(1/2))+1,2):
            if r%i==0:
                print(i,r-i); break
        else: print(-1)
        
            
        

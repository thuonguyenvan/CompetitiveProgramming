import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n=int(input())
    a=sorted(R())
    check=1
    if a[0]%2==0:
        for i in a:
            if i%2: print('NO'); break
        else: print('YES')
    else:
        print('YES')
        
              
        
    
    
    

import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n=int(input())
    s=input()
    res=[]
    for i in range(n-1):
        res.append(s[i:i+2])
    res=list(set(res))
    print(len(res))
        
    

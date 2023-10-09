import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
#print(1&(2**0))
for _ in range(int(input())):
    x=int(input())
    i=0
    res=[]
    while 2**i<x:
        res.append(2**i)
        i+=1
    t=res[-1]
    du=x-t
    k=du%2
   # print(res)
    du=du-k
    for i in range(30,-1,-1):
        check=du&(2**i)
        if check:
            t+=2**i
            res.append(t)
    if k: res.append(x)
    print(len(res))
    res.reverse()
    for i in res: print(i,end=' ')
    print()
        
    

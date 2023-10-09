import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n=int(input())
    R()
    if n&1:
        print(4)
        for i in range(2): print(2,n)
        for i in range(2): print(1,2)
        res=[[2,n] for i in range(2)] 
    else:
        print(2)
        for i in range(2): print(1,n)

import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n=int(input()); res=0
    while n>0:
        res+=n
        n//=2
    print(res)

import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n=int(input()); res=0
    for i in range(n):
        x,y=R(); res+=int(x>y)
    print(res)
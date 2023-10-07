import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    a,b,n=R()
    x=R()
    res=b
    for i in x: res+=min(i,a-1)
    print(res)

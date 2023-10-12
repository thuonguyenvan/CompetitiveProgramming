import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    a=[]
    for i in range(3): a.append(R())
    res=1
    y1,y2=a[1][1]-a[0][1], a[2][1]-a[0][1]
    x1,x2=a[1][0]-a[0][0], a[2][0]-a[0][0]
    if y1*y2>0: res+=min(abs(y1),abs(y2))
    if x1*x2>0: res+=min(abs(x1),abs(x2))
    print(res )

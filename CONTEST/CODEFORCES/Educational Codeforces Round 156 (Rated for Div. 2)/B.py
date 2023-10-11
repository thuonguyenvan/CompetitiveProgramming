import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
def dis(a,b,x,y):
    return ((a-x)**2+(b-y)**2)**(1/2)
for _ in range(int(input())):
    px,py=R()
    ax,ay=R()
    bx,by=R()
    t=max(dis(0,0,ax,ay), dis(ax,ay,px,py))
    w=t
    t=max(dis(0,0,bx,by), dis(bx,by,px,py))
    w=min(w,t)
    t=dis(ax,ay,bx,by)/2
    if dis(ax,ay,0,0)<=t and dis(bx,by,px,py)<=t: w=min(w,t)
    if dis(bx,by,0,0)<=t and dis(ax,ay,px,py)<=t: w=min(w,t)
    t=max(dis(ax,ay,0,0), dis(bx,by,px,py))
    cham=dis(ax,ay,bx,by)/2
    if t>=cham: w=min(t,w)
    t=max(dis(bx,by,0,0), dis(ax,ay,px,py))
    if t>=cham: w=min(t,w)
    print(w)
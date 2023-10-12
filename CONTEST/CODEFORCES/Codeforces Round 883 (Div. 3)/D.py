import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n,d,h=R()
    y=R()
    s=(d*h)/2 *n
    for i in range(n-1):
        t=y[i+1]-y[i]
        if t>=h: continue
        t=h-t
        td=(t/h) * d
        s-=(t*td)/2
    print(s)
        
        

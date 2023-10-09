import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):   
    a,b,c=R()
    t=abs(a-b)/2
    print(int(t//c + (t%c!=0)))
    

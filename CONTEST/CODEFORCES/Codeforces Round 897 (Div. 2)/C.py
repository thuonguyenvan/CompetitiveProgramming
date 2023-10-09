import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n=int(input())
    a=R()
    if 0 not in a: print(0);sys.stdout.flush(); y=input(); continue
    t=0
    for i in range(1,n):
        if a[i]>a[i-1]+1: t=a[i-1]+1; break
    print(t if t else a[-1]+1)
    sys.stdout.flush()
    
    y=int(input())
    while y!=-1:
        print(y)     
        sys.stdout.flush()
        y=int(input())
        
'''    
sys.stdout.flush()
'''

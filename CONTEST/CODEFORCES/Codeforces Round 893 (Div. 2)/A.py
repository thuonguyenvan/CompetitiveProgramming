import sys;input=sys.stdin.readline
R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    a,b,c=R()
    t=c//2 + c%2
    a+=t
    b+=c-t
    print('First' if a>b else 'Second')
    

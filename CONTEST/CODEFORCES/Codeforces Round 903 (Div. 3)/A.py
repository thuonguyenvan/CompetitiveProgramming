import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    R()
    a=input().strip()
    s=input().strip()
    cnt=0
    check=0
    while len(a)<=2*len(s):
        if s in a: print(cnt); check=1; break
        a+=a
        cnt+=1
    
    if check: continue
    if s in a: print(cnt); continue
    a+=a
    cnt+=1
    if s in a: print(cnt); continue
    else: print(-1)
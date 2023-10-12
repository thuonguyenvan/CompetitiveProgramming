import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n,x=R()
    a=[R(), R(), R()]
    a[0].reverse(); a[1].reverse(); a[2].reverse()
    tr=0
    tx=bin(x)
    for i in range(n):
        for j in range(3):
            if a[j] and a[j][-1]<=x:
                ti=bin(a[j][-1]); check=1
                l=len(ti)
                for k in range(l-1,0,-1):
                    if ti[k-l]=='1' and tx[k-l]=='0': check=0
              
                if check: tr=tr|a[j][-1]; a[j].pop()
   
    print('YES' if tr==x else 'NO')

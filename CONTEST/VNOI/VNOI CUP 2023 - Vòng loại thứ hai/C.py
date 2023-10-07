import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
from math import gcd
for _ in range(int(input())):
    n,k=R(); a=R()
    t=sorted(a.copy())
    b={}
    c={}
    d={}
    for i in range(n):
        if b.get(t[i], -1)==-1:
            b.setdefault(t[i], [i])
        else:
            b[t[i]].append(i)
    for i in range(n):
        check=1
        for j in (b[a[i]]):
            if ((i+1)%k + (j+1)%k)%k==0 or ((i+1)%k - (j+1)%k)%k==0: b[a[i]].remove(j);check=0; break
            if ((i+1)%k == (j+1)%k):
                for k in b[a[i]]:
                    if (k+i+1)%k==0: check=0; break
        if check: print('NO'); break
    else: print('YES')

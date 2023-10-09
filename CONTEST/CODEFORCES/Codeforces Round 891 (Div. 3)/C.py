import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
from collections import Counter, deque, defaultdict
for _ in range(int(input())):
    n=int(input())
    a=R()
    res=[]
    m=n*(n-1)//2
    cnt=Counter(a)
    t=sorted(list(set(a)))
    res=[]
    d=0
    for i in range(len(t)):
        c=1
        q=n-i-d-1
        w=q-1
        while q<cnt[t[i]]:
            q+=w
            w-=1
            d+=1
            c+=1
        res+=[t[i]]*c
    res+=[t[-1]]*(n-len(res))
    print(*res)
            
'''             
1
4
7 5 3 5 3 3
'''

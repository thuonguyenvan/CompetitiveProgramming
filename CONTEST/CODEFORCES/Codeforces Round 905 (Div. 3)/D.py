import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
from heapq import heappush as hpush, heappop as hpop
n=int(input())
l=[]
r=[]
cl={}
cr={}

for i in range(n):
        t, x, y = input().split()
        x= int(x)
        y= int(y)   
        if t=='+': 
                if cl.get(x, -1)==-1:
                        cl.setdefault(x, 1)
                        hpush(l,-x)
                else: cl[x]+=1
                if cr.get(y, -1)==-1:
                        cr.setdefault(y, 1)
                        hpush(r, y)
                else: cr[y]+=1
                if cl[x]==1: hpush(l, -x)
                if cr[y]==1: hpush(r,y)
        else: cl[x]-=1; cr[y]-=1
        # print(l, cl)
        # print(r, cr)
        rl=-1; rr=1e18
        while l and not cl[-l[0]]: hpop(l)
        while r and not cr[r[0]]: hpop(r)
        if l: rl=-l[0]
        if r: rr=r[0]
        # print(rl, rr)
        if rl>rr: print('YES')
        else: print("NO")

import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
from heapq import heappush as hpush, heappop as hpop
for _ in range(int(input())):
    n,m,k=R()
    a=sorted(R())
    b=sorted(R())
    mna,mxa,mnb,mxb=a[0],a[-1],b[0],b[-1]
    if (mna<=mnb):
        if k%2:
            print(sum(a)-mna+mxb)
        else:
            a[0],b[-1]=b[-1],a[0]
            print(sum(a)-max(a)+min(b))
    else:
        if (mna<mxb):
            if k%2:
                print(sum(a)-mna+mxb)
            else:
                a[0],b[-1]=b[-1],a[0]
                print(sum(a)-max(a)+min(b))
        else:
            if (k%2):
                print(sum(a))
            else: print(sum(a)-max(a)+min(b))
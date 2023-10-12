
#can AC?
from random import randint
 
RANDOM = randint(1, 10 ** 9)
 
class Wrapper(int):
    def __init__(self, x):
        int.__init__(x)
    def __hash__(self):
        return super(Wrapper, self).__hash__() ^ RANDOM


    
import sys;input=sys.stdin.readline
from math import perm
R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n=int(input())
    cntx={}
    cnty={}
    cntd={}
    cntd1={}
    for i in range(n):
        x,y=R()
        wx=Wrapper(x)
        cntx[wx]=cntx.get(wx,0)+1
        
        wy=Wrapper(y)
        cnty[wy]=cnty.get(wy,0)+1
        
        
        d=x-x
        y1=y+x
        y=y-x

        wy=Wrapper(y)
        cntd[wy]=cntd.get(wy,0)+1

        wy=Wrapper(y1)
        cntd1[wy]=cntd1.get(wy,0)+1

    #print(cntd)
        
        
    res=0
    for i in cntx: res+=perm(cntx[i],2)
   # print(res)
    for i in cnty: res+=perm(cnty[i],2)
   # print(res)
    for i in cntd: res+=perm(cntd[i],2)
    for i in cntd1: res+=perm(cntd1[i],2)
    print(res)
    
    
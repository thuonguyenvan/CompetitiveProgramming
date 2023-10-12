import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
dic={}
for i in range(2,1000001):
    t=1+i+i*i
    d=3
    while t<10**18+1:
        dic.setdefault(t,1)
        t+=i**d; d+=1
for _ in range(int(input())):
    print('YES' if dic.get(int(input()),0) else 'NO')

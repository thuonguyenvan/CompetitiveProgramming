import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
n=int(input())
a=[abs(i) for i in R()]
print(min(a))

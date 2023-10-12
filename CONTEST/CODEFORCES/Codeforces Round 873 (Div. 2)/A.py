import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n=int(input())
    for i in range(1,n+1):
        print(2*i, end=' ')
    print()

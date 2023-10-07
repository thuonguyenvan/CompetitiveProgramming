for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    for i in range(n):
        if a[a[a[i]-1]-1]==i+1: print('<3'); break
    else: print('</3')

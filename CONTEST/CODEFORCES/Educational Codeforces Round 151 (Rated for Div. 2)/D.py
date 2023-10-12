import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n=int(input()); a=R(); pre=[0]
    for i in a: pre.append(pre[-1]+i)
    k=0; res=0; t=-10**18
    for i in pre:
        k=max(k,i)
        if k-i>=t: res=k; t=k-i
    print(res)

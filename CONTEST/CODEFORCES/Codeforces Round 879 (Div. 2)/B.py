import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    l,r=input().split(); m=max(len(l),len(r))
    for i in range(len(l),m): l='0'+l
    for i in range(len(r),m): r='0'+r
    i=0
    while l[i]==r[i] and i<m-1: i+=1
    res=abs(int(l[i])-int(r[i]))
    res=res+9*(m-i-1)
    print(res)
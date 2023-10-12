import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n,k=R()
    a=R()
    b=sorted(R())
    lst=a.copy()
    lst.sort()
    dic={}
    for i in range(n):
        if dic.get(lst[i],-1)==-1:
            dic.setdefault(lst[i], [b[i]])
        else: dic[lst[i]].append(b[i])
        
    for i in a:
        print(dic[i].pop(), end=' ')
    print()
    

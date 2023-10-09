import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n,m=R()
    a=[[] for i in range(m+1)]
    for i in range(n):
        s=input()
        for j in range(m):
            a[j].append(s[j])
    check=1
    i=0
    while 'v' not in a[i] and i<m-1: i+=1
    if 'v' not in a[i]: check=0
    else: i+=1
    while 'i' not in a[i] and i<m-1: i+=1
    if 'i' not in a[i]: check=0
    else:
        i+=1
    while 'k' not in a[i] and i<m-1: i+=1
    if 'k' not in a[i]: check=0
    else: i+=1
    while 'a' not in a[i] and i<m-1: i+=1
    if 'a' not in a[i]: check=0
    print('Yes' if check else 'No')
    
    

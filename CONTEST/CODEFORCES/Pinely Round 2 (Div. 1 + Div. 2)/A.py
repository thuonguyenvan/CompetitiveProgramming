import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n,a,q=R()
    s=input()
    cnt=0
    res=a
    ans='No'
    if a==n:
        print('YES'); continue
    for i in range(q):
        if s[i]=='-': cnt-=1
        else: cnt+=1
        if a+cnt>=n: ans='YES'
    if ans=='YES': print(ans)
    elif a+ s.count('+')>=n:
        print('MAYBE')
    else: print('NO')
        

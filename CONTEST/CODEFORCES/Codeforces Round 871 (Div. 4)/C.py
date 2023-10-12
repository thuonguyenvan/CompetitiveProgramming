for _ in range(int(input())):
    n=int(input())
    a=[]
    mn1,mn2=99999999999999999,99999999999999999
    ans=999999999999999999
    for i in range(n):
        b=list(input().split())
        if b[1][-1]=='1': mn2=min(mn2,int(b[0]))
        if b[1][-2]=='1': mn1=min(mn1,int(b[0]))
        if b[1][-1]==b[1][-2]=='1': ans=min(ans,int(b[0]))
    if mn1==99999999999999999 or mn2==99999999999999999: print(-1)
    else: print(min(ans,mn2+mn1))
            

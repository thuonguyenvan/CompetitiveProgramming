for _ in range(int(input())):
    n,k=map(int,input().split())
    a=[]
    for i in range(n):
        a.append(input())
    b=[1]*(n+1)
    ans=n
    for i in range(k):
        for j in range(1,n):
       #     print(a[j][i], a[
            if a[j][i]!=a[0][i] and b[j]:
                ans-=1
                b[j]=0
    print(ans)

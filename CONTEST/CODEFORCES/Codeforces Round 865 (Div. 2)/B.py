for _ in range(int(input())):
    n=int(input())
    a=[[0]*n,[0]*n]
    k1=2*n
    k2=2
    for j in range(n):
        if j%2==0:
            a[0][j]=k1
            k1-=2
        else:
            a[0][j]=k2
            k2+=2
    k1=2*n-1
    k2=1
    for j in range(n):
        if j%2==0:
            a[1][j]=k2
            k2+=2
        else:
            a[1][j]=k1
            k1-=2
    a[1][-1],a[1][1]=a[1][1],a[1][-1]
    print(*a[0])
    print(*a[1])
        
            

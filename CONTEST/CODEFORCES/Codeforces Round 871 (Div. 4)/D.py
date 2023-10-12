for _ in range(int(input())):
    n,m=map(int,input().split())
    t1=int(n**(1/3))
    t2=int(n**(1/(3/2)))
    check=0
    if n==1 and m==1: print('YES'); continue
    for i in range(t1+1):
        for j in range(t2+1):
            if m*(3**i)*((3/2)**j)==n: check=1
            if m*(3**i)*((3/2)**j)>n: break
            
    print('YES' if check else 'NO')

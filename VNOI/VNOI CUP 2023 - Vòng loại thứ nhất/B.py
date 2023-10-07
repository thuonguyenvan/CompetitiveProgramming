for _ in range(int(input())):
    a=list(map(int,input().split()))
    tr1=90/a[0]
    tr2=90/a[2]
    if tr1*a[1]<10: v1=a[0]+a[1]; t1=100/v1
    else: t1=90/a[0]
    if tr2*a[3]<10: v2=a[2]+a[3]; t2=100/v2
    else: t2=90/a[2]
    if t1==t2: print('Draw')
    elif t1>t2: print('Yunyun')
    else: print('Megumin')

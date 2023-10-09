import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n,k=R()
    b=[0]+R()
    if k==1:
        if b!=[i for i in range(n+1)]: print('No')
        else: print('Yes')
        continue
    vs=[0]*(n+1)
    val=[0]*(n+1)
    turn=[0]*(n+1)
    for i in b[1:]:
        t=i
        if vs[t]: continue
        cnt=0
        while not vs[t]:
            turn[t]=i
            vs[t]=1
            val[t]=cnt
            cnt+=1
            t=b[t]
        if turn[t]==turn[i] and cnt-val[t]!=k: print('No'); break
    else: print('Yes')
            
            
        

    
'''
2
10 2
5 1 2 5 4 8 3 10 4 8
10 6
6 7 7 8 1 3 9 1 8 2
'''

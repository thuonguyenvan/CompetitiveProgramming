from math import comb as c
for _ in range(int(input())):
    n,k=map(int,input().split())
    ans=[-1]
    check=0
    t=0
    for i in range(n):
    #    print(c(i+1, 2) + c(n-i-1,2))
        if c(i+1, 2) + c(n-i-1,2)==k:
            check=i
            t=1
            break
    for i in range(check):
        ans.append(-1)
    for i in range(len(ans),n):
        ans.append(1)
    if t:
        print('YES')
        print(*ans)
    else: print('NO')
        
    

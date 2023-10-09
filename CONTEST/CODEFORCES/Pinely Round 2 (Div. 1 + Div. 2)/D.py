import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n,m=R()
    a=[]
    ans=0
    for i in range(n):
        a.append(input().strip())
    for i in a:
        if (m-i.count('.'))%2: ans=-1; break
    for i in range(m):
        cnt=0
        for j in range(n):
            if a[j][i]=='.': cnt+=1
        if (n-cnt)%2: ans=-1; break
    if ans: print(ans); continue
    
    res = [['.' for _ in range(m)] for _ in range(n)]
    for i in range(n):
        s =a[i]
        c =0
        for j in range(m):
            if s[j] == 'U':
                if c %2 == 0:
                    res[i][j]= 'W'
                    res[i +1][j] = 'B'
                else:
                    res[i][j] ='B'
                    res[i +1][j] = 'W'
                c +=1
            if s[j] == '.': res[i][j] = '.'
    for i in range(m):
        c = 0
        for j in range(n):
            if a[j][i] == 'L':
                if c % 2 == 0:
                    res[j][i] = 'W'
                    res[j][i + 1] = 'B'
                else:
                    res[j][i] = 'B'
                    res[j][i + 1] = 'W'
                c += 1
    for i in range(n):
        print(''.join(res[i]))

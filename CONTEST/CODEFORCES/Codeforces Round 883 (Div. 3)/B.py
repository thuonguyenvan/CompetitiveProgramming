import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    a=[]; dic={'X':0, 'O':0, '+':0}
    res=[]
    for j in range(3):
        a.append(input().strip())
    for i in range(3):
        a.append(a[i][0]+a[i][1]+a[i][2])
        a.append(a[0][i]+a[1][i]+a[2][i])
    a.append(a[0][0]+a[1][1]+a[2][2] )
    a.append(a[0][2]+a[1][1]+a[2][0])
    if 'XXX' in a:print('X')
    elif 'OOO' in a: print('O')
    elif '+++' in a: print('+')
    else:
        print('DRAW')

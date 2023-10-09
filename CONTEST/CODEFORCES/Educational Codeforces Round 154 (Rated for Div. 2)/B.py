import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    s1=input().strip()
    s2=input().strip()
    for i in range(len(s1)-1):
        if s1[i]==s2[i]=='0' and s1[i+1]==s2[i+1]=='1':
            print('YES')
            break
    else: print('NO')

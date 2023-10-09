import sys;input=sys.stdin.readline
R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    s=input().strip()
    n=len(s)
    if ')(' in s:
        res='('*n+')'*n
    else:
        res='()'*n
    if s in res:
        print('No')
    else: print('Yes'); print(res)
    
    

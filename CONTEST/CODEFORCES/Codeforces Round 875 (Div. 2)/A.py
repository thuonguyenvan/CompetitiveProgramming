import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n=int(input()); a=R()
    for i in a:
        print(n-i+1, end=' ')
    print()
    

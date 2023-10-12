import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
from collections import Counter
for _ in range(int(input())):
    s=input().strip()
    check=0
    t=s.count(s[0])
    if t==len(s) or t==len(s)-1 : check=1
    print('NO' if check else 'YES')
    


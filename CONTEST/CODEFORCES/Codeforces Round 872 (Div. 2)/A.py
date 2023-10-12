def check(s):
    n=len(s)
    for i in range(n//2):
        if s[i]!=s[n-i-1]: return 1
    else: return 0
import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    s=input().strip()
    if s.count(s[0])==len(s): print(-1); continue
    if check(s): print(len(s))
    else: print(len(s)-1)
    


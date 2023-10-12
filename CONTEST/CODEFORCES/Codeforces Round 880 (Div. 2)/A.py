import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n=int(input()); a=R(); cnt=[0]*(max(a)+1)
    for i in a: cnt[i]+=1
    t=list(set(a))
    t.sort()
    if t[0]!=0: print('NO'); continue
    for i in range(len(t)-1):
        if t[i]!=t[i+1]-1 or cnt[t[i]]<cnt[t[i+1]]: print('NO'); break
    else: print('YES')
    

from bisect import bisect
input(); t=[]
for c in map(int,input().split()):
    ti=bisect(t,c)
    if ti<len(t):t[ti]=c
    else:t.append(c)
print(len(t))
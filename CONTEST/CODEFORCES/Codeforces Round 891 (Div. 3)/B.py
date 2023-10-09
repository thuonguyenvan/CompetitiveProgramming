import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    s=input().strip()
    t=[i for i in s]
    t.reverse()
    t+=['0']
    n=len(s)
    i=0
    k=0
    while i<n:
        if int(t[i])>4:
            j=i+1
            while t[j]=='9' and j<=n: j+=1
            t[j]=str(int(t[j])+1); k=j
            i=j
        else: i+=1
       # print(t)
       
    if t[-1]=='0': t=t[0:n]
   # print(t,k)
    res=t[k:]
    res.reverse()
    res+=['0']*k
    print(''.join(res))
    
                

import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
t = int(input())
for _ in range(t):
    n,k=R()
    a=R()
    h=R()
    if min(a)>k: print(0); continue
    res=1
    mask=0
    fr=a[0]
    i=1
    j=0
    while i<n:
        if h[i-1]%h[i]==0:
            fr+=a[i]
            if fr>k:
                j=mask
                while fr>k:
                    fr-=a[j]
                    j+=1
                mask=j
            res=max(res,i-mask+1)
        else:
            fr=a[i]
            mask=i
       # print(fr,mask,i)
        i+=1
    print(res)
        

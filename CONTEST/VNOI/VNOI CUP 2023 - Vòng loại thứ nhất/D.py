import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
n,k=R(); s=input(); t=input(); a=R()
pre=[0]*(n+1); dif=[]; res=0
for i in range(n): pre[i]=pre[i-1]+a[i]
i=0
while i<n:
    if s[i]!=t[i]:
        cs=[0]*27; ct=[0]*27; cnt=0
        for j in range(i,n):
            cnt+=1
            cs[ord(s[j])-97]+=1
            ct[ord(t[j])-97]+=1
            qws=0
            for p in range(len(cs)): qws+=abs(cs[p]-ct[p])
            if qws==0: break
        dif.append([i,i+cnt-1])
        res+=pre[i+cnt-1]-pre[i-1]
        i+=cnt-1
    i+=1
ans=[]
q=len(dif)
for i in range(q-1): ans.append(pre[dif[i+1][0]-1]-pre[dif[i][1]])
ans.sort()
for i in range(q-k): res+=ans[i]
print(res)

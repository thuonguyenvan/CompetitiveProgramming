'''import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n,t=R()
    a=R()
    b=R()
    ans,mx, cnt=0,0,0
    for i in range(n):
        if a[i]+cnt<= t and max(mx,b[i])==b[i]:
            mx=b[i]
            ans=i+1
        cnt+=1
    print(ans if ans else -1)
    '''
for _ in range(int(input())):
    n=int(input())
    a=sorted(list(map(int,input().split())))
    print(max(a[-1]*a[-2], a[0]*a[1]))
    
    

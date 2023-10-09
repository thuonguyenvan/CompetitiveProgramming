import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n,k=R()
    s=input().strip()
    #print(a)
    if k%2==0:
        print(''.join(sorted(s)))
        continue
    s1=sorted(s[0::2])
    s2=sorted(s[1::2])
    s1.reverse()
    s2.reverse()
    res=''
    while len(res)<n:
        if s1: res+=s1.pop()
        if s2: res+=s2.pop()
    print(res)
    
    
    

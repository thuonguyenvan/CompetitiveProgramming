import sys;input=sys.stdin.readline
R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    res=''
    for i in range(8):
        s=input().strip()
        for j in range(8):
            if s[j]!='.': res+=s[j]
    print(res)
                
        
            

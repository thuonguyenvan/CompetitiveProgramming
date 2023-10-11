import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    s=input().strip()
    pos=int(input())
    t=len(s)
    cnt=0
    tot=t
    while tot<pos:
        cnt+=1
        t-=1
        tot+=t
    pos=tot-pos
    re=0
    check=[0]*len(s)
    st=[s[0]]
    cur=0
    for i in range(1,len(s)):
        if re==cnt: break
        while st and s[i]<st[-1] and re<cnt: st.pop(); re+=1
        st.append(s[i])
        cur=i
    t=st
    for i in range(cur+1,len(s)): t.append(s[i])
    #print(t, re)
    while re<cnt:
        t.pop()
        re+=1
   # print(t)
   # print(pos)
    print(t[-pos-1],end='')
    
'''
1
bcdabcd
9
'''

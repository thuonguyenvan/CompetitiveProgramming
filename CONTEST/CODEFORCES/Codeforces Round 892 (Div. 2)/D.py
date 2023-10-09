from sys import stdin;input = lambda: stdin.readline().rstrip('\r\n')
R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n=int(input())
    por=[]
    for i in range(n):
        l,r,a,b=R()
        por.append([l,b])
    por.sort()
    seg=[[0,0], por[0]]
  #  print(seg)
    for i in range(1,n):
        if por[i][0] <= seg[-1][-1]:
            seg[-1][-1]=max(seg[-1][-1], por[i][-1])
        else: seg.append(por[i])
  #  print(seg)
    q=int(input())
    que=R()
    tque=que[:]
    tque.sort()
    res={}
    ind=0
    for i in tque:
        while ind<len(seg)-1 and i>=seg[ind+1][0]: ind+=1
        res.setdefault(i,max(seg[ind][-1], i))
    for i in que:
        print(res[i], end=' ')
    print()




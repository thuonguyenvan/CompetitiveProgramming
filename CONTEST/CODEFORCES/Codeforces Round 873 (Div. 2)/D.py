import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
for _ in range(int(input())):
    n=int(input()); a=R(); res=0
    for i in range(n):
        t=[a[i]]
        for j in range(i+1, n):
            if a[j]>t[-1]: t.append(a[j])
            else:
                k=t.pop()
                while t and t[-1]>a[j]: t.pop()
                t.append(k)
            res+=j-i+1-len(t)
            #print(res)
    print(res)
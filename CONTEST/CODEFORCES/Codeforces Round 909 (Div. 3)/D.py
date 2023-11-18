import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
from math import comb
from random import randint
RANDOM = randint(1, 10 ** 9)
class Wrapper(int):
    def __init__(self, x):
        int.__init__(x)
    def __hash__(self):
        return super(Wrapper, self).__hash__() ^ RANDOM
    
def c2( n ):
    res = 0
    while n % 2 == 0:
        res += 1
        n //= 2
    return res
for _ in range(int(input())):
    n  = int(input())
    a = R()
    dic = {}
    for i in range(n):
        t = a[i] - c2(a[i])
        t = Wrapper(t)
        s = a[i] // 2**(c2(a[i]))
        s = Wrapper(s)

        if dic.get(t, -1) == -1:
            dic.setdefault(t, {})
            dic[t].setdefault(s, 1)
        else:
            if dic[t].get(s, -1) == -1:
                dic[t].setdefault(s, 1)
            else: 
               # print(dic[t])
                dic[t][s] +=1
    res = 0
   # print (dic)
    for i in dic:
        for j in dic[i]:
            res += comb(dic[i][j], 2)
    print(res)
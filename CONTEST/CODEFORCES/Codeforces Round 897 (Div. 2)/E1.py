import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
def qa(i):
    print('?',i)
    sys.stdout.flush()
    return int(input())
for _ in range(int(input())):
    n,k=R()
    res=0
    if n%k==0:
        for i in range(1,n-k+2,k):
            res^=qa(i)
        print('!',res)
        sys.stdout.flush()
    else:
        t=n%k
        res^=qa(1)
        res^=qa(t//2+1)
        res^=qa(t+1)
        for i in range(1+t+k,n-k+2,k):
            res^=qa(i)
        print('!', res)
        sys.stdout.flush()


'''    
sys.stdout.flush()
'''

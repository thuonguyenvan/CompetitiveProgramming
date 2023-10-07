for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    a+=list(map(int,input().split()))
    a.sort()
    print(sum(a[n:]))

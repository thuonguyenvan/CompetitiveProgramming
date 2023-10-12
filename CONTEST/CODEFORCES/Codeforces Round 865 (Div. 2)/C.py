for _ in range(int(input())):
    n=int(input())
    a=[0]+list(map(int,input().split()))
    for i in range(1,n-1): dis=a[i-1]-a[i]; a[i]+=dis; a[i+1]+=dis;
    print('NO' if n%2==0 and a[-1]<a[-2] else 'YES')


for _ in range(int(input())):
    n = int(input())
    if n == 1: 
        print(n)
    elif n % 2: 
        print(-1)
    else: 
        print(*[i + 2 * (i % 2 == 0) for i in range(n)])

import sys;input=sys.stdin.readline;R=lambda:list(map(int,input().split()))
def rotate_matrix_90_degrees(matrix):
    n = len(matrix)
    rotated_matrix = [[0 for _ in range(n)] for _ in range(n)]
    for i in range(n):
        for j in range(n):
            rotated_matrix[j][n - 1 - i] = matrix[i][j]
    return rotated_matrix
for _ in range(int(input())):
    n=int(input())
    a=[[i for i in input().strip()] for i in range (n)]
    b=rotate_matrix_90_degrees(a)
    c=rotate_matrix_90_degrees(b)
    d=rotate_matrix_90_degrees(c)
    res=0
    for i in range(n):
        for j in range(n):
            t=max(a[i][j], b[i][j], c[i][j], d[i][j])
            t=ord(t)
            res+=t-ord(a[i][j])
            res+=t-ord(b[i][j])
            res+=t-ord(c[i][j])
            res+=t-ord(d[i][j])
    print(res//4)

        
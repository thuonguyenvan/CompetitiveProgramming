def cal(grid):
    val = [1, 2, 3, 4, 5]
    total_points = 0
    
    for i in range(10):
        for j in range(10):
            if grid[i][j] == 'X':
                ring = min(i, j, 9 - i, 9 - j)
                total_points += val[ring]
    
    return total_points
t = int(input())
results = []
for _ in range(t):
    target = [input() for _ in range(10)]
    print(cal(target))
    

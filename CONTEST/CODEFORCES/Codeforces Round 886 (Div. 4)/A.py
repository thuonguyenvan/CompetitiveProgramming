def can_make_sum_greater_or_equal_to_10(a, b, c):
    return (a + b >= 10) or (a + c >= 10) or (b + c >= 10)

def main():
    t = int(input())
    for _ in range(t):
        a, b, c = map(int, input().split())
        if can_make_sum_greater_or_equal_to_10(a, b, c):
            print("YES")
        else:
            print("NO")

if __name__ == "__main__":
    main()

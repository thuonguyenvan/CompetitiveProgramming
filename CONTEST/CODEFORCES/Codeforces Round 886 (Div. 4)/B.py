def find_winner(n, responses):
    max_quality = 0
    winner_index = 0

    for i in range(n):
        words, quality = responses[i]
        if words <= 10 and quality > max_quality:
            max_quality = quality
            winner_index = i + 1

    return winner_index

def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        responses = []
        for _ in range(n):
            a, b = map(int, input().split())
            responses.append((a, b))

        winner_index = find_winner(n, responses)
        print(winner_index)

if __name__ == "__main__":
    main()

def can_make_abc(cards):
    count = 0
    if cards[0] != 'a':
        count += 1
    if cards[1] != 'b':
        count += 1
    if cards[2] != 'c':
        count += 1

    return count == 0 or count == 2

t = int(input())

for _ in range(t):
    cards = input()
    
    if can_make_abc(cards):
        print("YES")
    else:
        print("NO")

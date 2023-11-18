from itertools import permutations
a = [i for i in input().strip()]
t = permutations(a)
s = set()
for i in t: s.add(''.join(i))
print(len(s))
s = sorted(list(s))
for i in s: print (i)
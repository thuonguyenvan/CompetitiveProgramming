t='codeforces'
for _ in range(int(input())):
    s=input()
    ans=0
    for i in range(len(s)):
        if s[i]!=t[i]: ans+=1
    print(ans)

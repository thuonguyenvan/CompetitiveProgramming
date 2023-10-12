#ord('a')=97
for _ in range(int(input())):
    n=int(input());s=input();cnt=[0]*26
    for i in s:cnt[ord(i)-97]+=1
    if n%2 or max(cnt)>n//2: print(-1); continue
    cnt, res=[0]*26,0
    for i in range(n//2):
        if s[i]==s[n-i-1]: res+=1; cnt[ord(s[i])-97]+=1
    print(max(max(cnt), res//2+res%2))
            

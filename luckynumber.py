for _ in range(int(input())):
    l, r = map(int, input().split())
    m = 0
    ans = l
    for i in range(l, r + 1):
        s = list(str(i))
        if m < int(max(s)) - int(min(s)):
            m = int(max(s)) - int(min(s))
            ans = i
        if m == 9:
            break
    print(ans)

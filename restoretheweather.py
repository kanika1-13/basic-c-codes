for _ in range(int(input())):
    n, m = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    c = []
    for i in range(n):
        c.append((a[i], i))
    
    c = sorted(c)
    b = sorted(b)
    
    ans = [-1] * n
    for i in range(n):
        k = c[i][1]
        ans[k] = b[i]
    
    print(*ans)
for i in range(int(input())):
    n = int(input())
    l = list(map(int,input().split()))
    even = 0
    odd = 0
    for i in range(n):
        if l[i]%2 == 0 :
            even += 1
    if (even == n):
        print('Yes')
    else:
        if(min(l)%2)==0:
            print('NO')
        else:
            print('YES')
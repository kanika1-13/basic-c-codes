import math
t = int(input())
for _ in range (t):
    k,l = map(int,input().split(" "))
    if math.log(k,2)>=l:
        print(2**l)
    else:
        print(k+1)
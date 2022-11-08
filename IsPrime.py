def IsPrime(n):
    c = 0
    for x in range(2, n):
        if n % x == 0:
            c = c + 1
    return c
n = int(input())
if IsPrime(n) == 0:
    print("Yes")
else:
    print("No")


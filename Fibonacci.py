def Fibonacci(n):
    if 0<n<50:
        if n == 1:
            return 1
        elif n == 2:
            return 1
        else:
            return Fibonacci(n - 1) + Fibonacci(n - 2)
    else:
        return 'None'
n = int(input())
print(Fibonacci(n))
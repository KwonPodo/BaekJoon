def factorial(x):
    if x <= 1:
        return 1
    else:
        return x * factorial(x-1)

n = int(input())
print(factorial(n))
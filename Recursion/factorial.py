def factorial(n):
    print(n)
    if(n == 1):
        return 1
    else:
        return n * factorial(n-1)


factorial(int(input("Give me a number: ")))

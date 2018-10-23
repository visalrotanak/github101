def fact(n):
    return n * fact(n - 1) if n > 1 else 1

x = int(input("Enter a number to calculate factorial of:"))
f = fact(x)
print("The factorial is: {}".format(f))
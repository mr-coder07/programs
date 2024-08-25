def isprime(num):
    i = 2
    while i <= (num / 2):
        if num % i == 0:
            return False  # Not a prime number
        i = i + 1
    return True  # It's a prime number

a = int(input("enter first no."))
b = int(input("enter second no."))

k = a
while k <= b:
    if isprime(k):
        print(f"{k} is prime")
    k = k + 1

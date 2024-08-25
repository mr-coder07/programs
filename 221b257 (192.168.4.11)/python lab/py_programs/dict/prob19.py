# Dictionary to store prime numbers and their digit sum
pdict = {}

for i in range(51, 101):
    prime = True  # Assume i is prime until proven otherwise

    for k in range(2, i//2 + 1):
        if i % k == 0:
            prime = False
            break
    
    if prime:
        val = i  # Assign i as val if it's prime
        digitsum = sum(int(digit) for digit in str(val))  # Calculate digit sum
        pdict[i] = digitsum  # Add to the dictionary

print(pdict)

# Function to check if a number is prime
def is_prime(num):
    # A prime number is greater than 1
    if num <= 1:
        return False
    # Check for factors from 2 to sqrt(num)
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True

# Function to generate a list of prime numbers up to the given limit
def prime_numbers_up_to(limit):
    primes = []
    for num in range(2, limit + 1):
        if is_prime(num):
            primes.append(num)
    return primes

# Input from the user
num = int(input("Enter a number: "))

# Check and output result
if is_prime(num):
    print(f"{num} is a prime number.")
else:
    print(f"{num} is not a prime number.")

# Generate and print list of prime numbers up to the given number
primes_up_to_num = prime_numbers_up_to(num)
print(f"List of prime numbers up to {num}: {primes_up_to_num}")

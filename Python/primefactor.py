def isprime(n):
    if n == 2 or n == 3:
        return True
    if n % 2 == 0 or n % 3 == 0:
        return False
    i = 5
    w = 2
    while i * i <= n:
        if n % i == 0:
            return False
        i += w
        w = 6 - w

    return True

n = 13 
largest = 0
for i in range(2,n//2):
    if isprime(i):
        while (n % i == 0):
            print(i)
            n /= i
            if i > largest:
                largest = i
print(largest)

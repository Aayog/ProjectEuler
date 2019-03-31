a = 0
b = 1
n = 1000000
sum_ = 0
while a < n:
    a = a + b
    b = a + b
    print( a , b )
    if a % 2 == 0:
        sum_ += a
    if b % 2 == 0:
        sum_ += b

print(sum_)

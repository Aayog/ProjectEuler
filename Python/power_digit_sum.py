
ans = 2 ** 1000
sum = 0
while(ans != 0):
    sum += ans % 10
    ans //= 10

print("sum of the digits is ", sum)
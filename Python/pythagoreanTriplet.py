def pythogoreanTriplets(limits):
    c, m = 0, 2

    while c < limits:

        for n in range(1,m):
            a = m * m - n * n
            b = 2 * m * n
            c = m * m + n * n

            if c > limits:
                break
            if (a + b + c == 1000):
                print(a,b,c)
                return (a * b * c)
            
        m += 1


print(pythogoreanTriplets(1000))

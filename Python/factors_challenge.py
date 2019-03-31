def getTotalX(a, b):
    arr = []
    arr2 = []
    for i in range(max(a), min(b)+1):
        sadf = [i % j for j in a]
        if sum(sadf) == 0:
            arr.append(i)
    for i in arr:
        another = [j % i for j in b]
        if sum(another) == 0:
            arr2.append(i)
    return len(set(arr2))

print(getTotalX([1], [100]))
print(getTotalX([2], [20,30,12]))
print(getTotalX([2,4], [16,32,96]))

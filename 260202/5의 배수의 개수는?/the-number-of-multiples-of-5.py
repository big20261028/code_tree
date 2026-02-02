matrix = [ list(map(int,input().split())) for _ in range(4) ]

total = 0
for item in matrix:
    for num in item:
        if num % 5 == 0:
            total += 1
print(total)
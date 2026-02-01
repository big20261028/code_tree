n = int(input())

start_n = 1
sum = 0
while start_n <= 100:
    sum += start_n
    if sum >= n:
        break
    start_n += 1

print(start_n)
num_list = [ int(input()) for _ in range(10) ]

a = 0
b = 0
for n in num_list:
    if n % 3 == 0 : a += 1
    if n % 5 == 0 : b += 1

print(a, b)
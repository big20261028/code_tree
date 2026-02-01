n = int(input())

cnt = 0
for n in range(1,n+1):
    if n % 2 == 0 or n % 3 == 0 or n % 5 == 0:
        continue
    cnt += 1

print(cnt)
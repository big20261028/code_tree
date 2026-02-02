matrix = [ list(map(int,input().split())) for _ in range(4)]

total = 0
for idx,item in enumerate(matrix):
    for i in range(idx+1):
        total += item[i]
print(total)

    
n = int(input())

matrix = [ list(0 for _ in range(n)) for _ in range(n) ]

for col in range(n):
    if col % 2 == 0:
        for i,row in enumerate(range(n)):
            matrix[row][col] = i+1
    else:
        for i,row in enumerate(range(n-1,-1,-1)):
            matrix[row][col] = i+1

#print(matrix)
for item in matrix:
    print(''.join(map(str,item)))
matrix_1 = [ list(map(int,input().split())) for _ in range(3) ]
input()
matrix_2 = [ list(map(int,input().split())) for _ in range(3) ]

# print(matrix_1)
# print(matrix_2)

rows = 3
cols = 3
for row in range(rows):
    for col in range(cols):
        print(matrix_1[row][col] * matrix_2[row][col], end=" ")
    print()
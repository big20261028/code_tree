n, m = map(int,input().split())

matrix_1 = [ list(map(int,input().split())) for _ in range(n) ]
matrix_2 = [ list(map(int,input().split())) for _ in range(n) ]

#answer_matrix = []
for row in range(n):
    #answer_row = []
    for col in range(m):
        if matrix_1[row][col] == matrix_2[row][col]:
            #answer_row.append(0)
            print(0,end=" ")
        else:
            #answer_row.append(1)
            print(1,end=" ")
    print()
    #answer_matrix.append(answer_row)

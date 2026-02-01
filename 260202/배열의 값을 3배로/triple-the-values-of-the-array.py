matrix = [ list(map(int,input().split())) for _ in range(3) ]
rows = 3
cols = 3

new_matrix = [ [ n*3 for n in row ] for row in matrix ]

for elem in new_matrix:
    for item in elem:
        print(item,end=' ')
    print()
        
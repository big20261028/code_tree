matrix = [ list(map(int,input().split())) for _ in range(4) ]

for item in matrix:
    print(sum(item))
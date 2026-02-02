n = int(input())

matrix = [ list(i for i in range(1,n+1)) for _ in range(n) ]
#print(matrix)

for idx, item in enumerate(matrix):
    if idx%2==1:
        item.reverse()
    print(''.join(map(str,item)))
# print(matrix)
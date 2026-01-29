N = int(input())
array = [ item for item in map(int,input().split())]

for item in array:
    print(item**2, end=' ')
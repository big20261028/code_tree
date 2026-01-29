array = [ item for item in map(int,input().split())]

for idx in range(8):
    n = (array[idx] + array[idx+1] ) % 10
    array.append(n)

print(' '.join(map(str,array)))
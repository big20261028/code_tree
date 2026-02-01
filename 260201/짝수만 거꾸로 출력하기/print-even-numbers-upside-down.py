n = int(input())
num_list = map(int,input().split())
even_list = [ str(num) for num in num_list if num%2 == 0 ]
even_list.reverse()
print(' '.join(even_list))
n = int(input())
x = []
dir = []
for _ in range(n):
    xi, di = input().split()
    x.append(int(xi))
    dir.append(di)

# Please write your code here.
position_dict = { 0 : 0 }
start_position = 0
for move, way in zip(x,dir):
    position_dict[start_position] += 1
    for _ in range(move):
        if way == "R":
            start_position += 1
            if start_position in position_dict:
                position_dict[start_position] += 1
            else:
                position_dict[start_position] = 1
        elif way == "L":
            start_position -= 1
            if start_position in position_dict:
                position_dict[start_position] += 1
            else:
                position_dict[start_position] = 1
    #print(start_position)

#print(position_dict)

target_list = []
for key,value in position_dict.items():
    if value >= 2:
        #print(key)
        target_list.append(key)

target_list.sort()
groups = []
current_group = [target_list[0]]

for i in range(1, len(target_list)):
    if target_list[i] == target_list[i-1] + 1:
        current_group.append(target_list[i])
    else:
        groups.append(current_group)
        current_group = [target_list[i]]
groups.append(current_group)

#print(groups)
cnt = 0
for item in groups:
    cnt += len(item) - 1
print(cnt)
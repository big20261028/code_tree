text = input()

result = ""
for idx in range(len(text)):
    if idx == 1 or idx == (len(text)-2):
        result += 'a'
    else:
        result += text[idx]

print(result)
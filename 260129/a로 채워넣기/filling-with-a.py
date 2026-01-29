text = input()

result = ""
for idx in len(text):
    if idx == 2 or idx == (len(text)-2):
        result += 'a'
    else:
        result += text[idx]

print(result)
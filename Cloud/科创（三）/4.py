n = int(input())
a = []
for i in range(n):a.append(input())
def _backStr(text):
    if text == text[::-1]:
        return "Yes"
    return text + text[:-1][::-1]
for i in a:print(_backStr(i))
s = input()
words = s.split()
for i in words:
    print(f'{i}:{s.count(i)}')
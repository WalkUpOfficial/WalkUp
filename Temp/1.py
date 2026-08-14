input()
a = list(map(int, input().split(' ')))
j,o = [],[]
for i in a:
    if i % 2 == 0:
        o.append(i)
    else:
        j.append(i)
print(f'{max(j)} {max(o)}\n{' '.join(list(map(str, sorted(a))))}')
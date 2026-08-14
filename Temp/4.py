n = []
for i in range(12):
    n.append(float(input()))
for i in range(12):
    if n[i] > 800:
        n[i] = (n[i] - 800) * 0.2
print(f'{sum(n):.2f}')
n, m = map(int, input().split())
a = []

for i in range(n):
    x = list(map(int, input().split()))
    a.append(x)

for i in range(1, m):
    a[0][i] = a[0][i-1]
for j in range(1, m):
    a[j+1][0] = a[j-1][0]
for i in range(n):
    for j in range(m):
        a[i][j] += max(a[i-1][j], a[i][j-1])

print(a[n-1][m-1])
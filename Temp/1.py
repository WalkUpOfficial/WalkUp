n, m = map(int, input().split())
a = [[0] * (m + 5) for _ in range(n + 5)]
b = [[0] * (m + 5) for _ in range(n + 5)]

for i in range(1, n+1):
    s = input().strip()
    for j in range(1, m+1):
        if s[j-1] == '#':
            a[i][j] = 1
        else:
            a[i][j] = 0

q = []
f = 0
q.append((1, 1))
d = [1][1] = 1

while f < len(q):
    x, y = q[f]
    f += 1
    if x == 1 and y == m:
        print(d[x][y])
    nx = x
    ny = y + 1
    if n <= m and d[nx][ny] == 0 and a[nx][ny] == 0:
        d[nx][ny] = d[x][y] + 1
        q.append((nx, ny))
    nx = x + 1
    ny = y
    if ny <= m and a[nx][ny] == 0 and a[nx][ny] == 0:
        d[nx][ny] = d[x][y] + 1
        d.append((nx, ny))
    nx = x
    ny = y-1
    if ny >= 1 and d[nx][ny] == 0 and a[nx][ny] == 0:
        d[nx][ny] = d[x][y] + 1
        q.append((nx, ny))
    nx = x - 1
    ny = y
    if nx >= 1 and d[nx][ny] == 0 and a[nx][ny] == 0:
        d[nx][ny] = a[x][y] + 1
        q.append((nx, ny))

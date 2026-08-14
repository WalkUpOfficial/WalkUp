n = int(input())

for i in range(1, n+1):
    if str(i).endswith('5') or str(i).endswith('8'):
        print(i)

m, n = map(int, input().split())

for i in range(m, n + 1):
    s = str(i)
    if len(s) < 3:
        continue
    frag = True
    diff = int(s[1]) - int(s[0])
    for k in range(2, len(s)):
        if int(s[k]) - int(s[k-1]) != diff:
            frag = False
            break
    if frag:
        print(i)

a = input()
n,m = list(map(int, input().split(' ')))
c = 0

for i in range(n, m+1):
    s = str(i)
    if a in s:
        c += 1

print(c)

n = int(input())
c = 0

for i in range(10000, n + 1):
    frag = True
    for s in str(i):
        if int(s) % 2 == 1:
            frag = False
    if frag == True:
        c += 1

print(c)

n = int(input())

for i in range(1, n+1):
    for j in range(1, i+1):
        print(j, end='')
    print()

n = int(input())

for i in range(n):
    if i == 0 or i == n - 1:
        print('*' * n)
    else:
        print('*' + ' ' * (n - 2) + '*')

print(1993)

x, a, b = map(int, input().split())
count = 0

for i in range(1, x // a + 1):
    remaining = x - i * a
    if remaining > 0 and remaining % b == 0:
        count += 1
print(count)

n, x, y = map(int, input().split())
for i in range(1, n // x + 1):
    rem = n - i * x
    if rem > 0 and rem % y == 0:
        j = rem // y
        if i >= j and i + j >= 5:
            print(i, j)

for m in range(0, 17):
    for w in range(0, 26):
        c = 30 - m - w
        if c >= 0 and 3 * m + 2 * w + c == 50:
            print(m, w, c)
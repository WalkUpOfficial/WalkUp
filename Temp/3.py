n = int(input())
n1 = list(map(int, input().split()))
find_num = int(input())
finds = list(map(int, input().split()))
result = []

for i in finds:
    if i in n1:result.append(n1.index(i)+1)
    else:result.append('-1')

print(' '.join(list(map(str, result))))
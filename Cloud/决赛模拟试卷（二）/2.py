a, b = map(int, input().split())
print(len([x for x in range(a, b+1) if x % 2 != 0 and x % 7 == 0]))
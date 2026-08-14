# result = []
#
# for i in range(1000, 3001):
#     state = 0
#     temp = str(i)
#     while int(temp) > 10:
#         if state == 0:
#             if int(temp) % 2 == 1:
#                 temp = temp[1:]
#                 state = 0
#         else:
#             break
#         state += 1
#     if int(temp) % 2 == 1:
#         result.append(i)
#
# for i in result:
#     print(i)

def ss(n):
    if n < 2:
        return False
    for j in range(2, n):
        if n % j == 0:
            return False
    return True

for i in range(1000, 3001):
    if ss(i):
        if ss(i % 1000) and ss(i % 100) and ss(i % 10):print(i)
for i in range(int(input())):
    data = int(input())
    for j in range(2, int(data ** 0.5) + 1):
        if data % j == 0:
            print(data // j)
            break
    else:
        if data > 1:print("yes")
        else:print(data)
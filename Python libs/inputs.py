def cin(text="", type=str, Enter=False):
    end = ""
    if Enter:
        end = "\n"
    result = input(text+end)
    result = list(map(type, result.split()))

    return result
def inputs(num, type=str, text="", Enter=False):
    end = ""
    if Enter:
        end = "\n"
    num = int(num)
    result = []
    for i in range(num):
        result.append(input())
    result = list(map(type, result))
    return result
scores = {}
for i in range(int(input())):
    name, score = input().split()
    score = int(score)
    scores[name] = score
scores = dict(sorted(scores.values()))

for a,b in scores.items():
    print(a, b)
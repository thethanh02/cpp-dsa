def decimalToBinary(n):
    s ="{0:b}".format(int(n))
    while len(s)<4: s='0'+s
    return s

n = input()
a = []
res = []
for i in range(0, len(n)):
    a.append(list(map(str,decimalToBinary(int(n[i])))))
    res.append(['.', '.', '.', '.'])
for i in range(4):
    for j in range(4):
        if a[i][j] == "1":
            res[j][i] = '*'

for i in range(4):
    for j in range(4):
        if j == 1:
            print(res[i][j], end="  ")
        else:
            print(res[i][j], end=" ")
    print()
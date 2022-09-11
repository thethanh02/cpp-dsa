def solution(n, mark, endd, lim, sep):
    res = 0
    for i in range(int(n[0]), lim, sep):
        if mark[i] == 0:
            res = i
            break
    for i in range(0, len(n) - 1):
        res = res * 10 + endd
    return res

def so_khac_biet(mark, n, maxx, minn):
    m = int(n)
    if mark.count(0) == 0:
        return 'Impossible'

    low = solution(n, mark, maxx, -1, -1)
    high = solution(n, mark, minn, 10, 1)
    token_min = 10
    for i in range(0, 10):
        if mark[i] == 0 and token_min > i and i != 0:
            token_min = i
    if high <= m:
        high = token_min
        for i in range(0, len(n)):
            high = high * 10 + minn

    if low >= m:
        low = maxx
        for i in range(0, len(n) - 2):
            low = low * 10 + maxx

    # print(low, high)

    if low < m and m - low < high - m or high <= m:
        return low
    elif m - low > high - m or low >= m:
        return high
    return str(low) + ' ' + str(high)

mark = [0] * 10
n = input()
for i in n:
    mark[int(i)] = 1

maxx = -1
minn = 10
for i in range(0, 10):
    if mark[i] == 0:
        if i > maxx:
            maxx = i
        if i < minn:
            minn = i

print(so_khac_biet(mark, n, maxx, minn))
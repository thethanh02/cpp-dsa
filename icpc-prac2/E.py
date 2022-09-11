n, m = [int(i) for i in input().split()]
a = sorted([int(i) for i in input().split()])

l = 0
r = n - 1
count = 0
while l <= r:
    if a[l] + a[r] <= m:
        l += 1
    r -= 1
    count += 1

print(count)
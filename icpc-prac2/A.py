n = input()
if (len(n) == 1): 
    print(n)
else:
    zero = '0' * (len(n) - 1)
    n_ceil = int(str(int(n[0]) + 1) + zero)
    n_floor = int(str(int(n[0])) + zero)
    n = int(n)
    if n - n_floor >= n_ceil - n:
        print(n_ceil)
    else:
        print(n_floor)

from math import sqrt

N = pow(10, 7) 
prime = []
check = [1] * (N + 1)
check[0] = check[1] = 0
for i in range(2, int(sqrt(N))+1):
    if check[i] == 1:
        prime.append(i)
        for j in range(i*i, N+1, i):
            check[j] = 0
print(len(prime))
    
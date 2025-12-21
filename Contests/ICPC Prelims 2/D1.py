MAX_N = 2000000
is_p = [True] * MAX_N
for i in range(2, MAX_N):
    if not is_p[i]:
        continue
    for j in range(i * i, MAX_N, i):
        is_p[j] = False

prs = [i for i in range(2, MAX_N) if is_p[i]]

t = int(input())

while t > 0:
    t -= 1
    n, k = map(int, input().split())
    if k > n * (n - 1) / 2:
        print(-1)
        continue
    ptr = len(prs) - 1
    while n or k:
        if k >= n - 1:
            print(prs[ptr], end=' ')
            ptr -= 1
            k -= n - 1
            n -= 1
        else:
            if ptr > 0:
                ptr = 1
                print(6, end=' ')
            else:
                print(2, end=' ')
            n -= 1
    print()
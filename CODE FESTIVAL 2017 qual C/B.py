N = int(raw_input())
A = map(int, raw_input().split())
ans = 1
for i in range(N):
    if A[i] % 2 == 0:
        ans *= 2
    else:
        ans *= 1
print 3**N - ans

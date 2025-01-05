N = int(raw_input())
A = map(int, raw_input().split())
B = map(int, raw_input().split())
C = map(int, raw_input().split())

A.sort()
B.sort()
C.sort()

m = [0 for i in range(N)]

j = k = 0
while j < N and k < N:
    if B[j] >= C[k]:
        k += 1
        continue
    m[j] = N - k
    j += 1

for i in range(N-2, -1, -1):
    m[i] += m[i+1]
    
cnt = 0
i = j = 0
while i < N and j < N:
    if A[i] >= B[j]:
        j += 1
        continue
    cnt += m[j]
    i += 1

print cnt

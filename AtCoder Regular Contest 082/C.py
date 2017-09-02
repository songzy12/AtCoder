n = int(raw_input())
nums = map(int, raw_input().split())
from collections import Counter
c = Counter(nums)
ans = 0
for k in c:
    ans = max(ans, c[k] + c[k-1] + c[k+1])
print ans

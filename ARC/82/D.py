n = int(raw_input())
nums = map(lambda x: int(x) - 1, raw_input().split())
ans = 0
for i in range(len(nums)):
    if nums[i] == i:
        ans += 1
        if i != len(nums) - 1:
            nums[i], nums[i+1] = nums[i+1], nums[i]
print ans

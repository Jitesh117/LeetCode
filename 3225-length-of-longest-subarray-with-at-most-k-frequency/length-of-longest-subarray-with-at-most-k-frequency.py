class Solution:
    def maxSubarrayLength(self, nums: List[int], k: int) -> int:
        result = 0
        count = {}
        l = 0
        n = len(nums)
        for r in range(n):
            count[nums[r]] = count.get(nums[r], 0) + 1
            if count[nums[r]] > k:
                while nums[l] != nums[r]:
                    count[nums[l]] -= 1
                    l += 1
                count[nums[l]] -= 1
                l += 1
            result = max(result, r - l + 1)
        return result
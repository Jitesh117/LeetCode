class Solution:
    def arithmeticTriplets(self, nums: List[int], diff: int) -> int:
        result = 0
        for i in range(len(nums)):
            if nums[i] + diff in nums and nums[i] + 2 * diff in nums:
                result += 1
        return result
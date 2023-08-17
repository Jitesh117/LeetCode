class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        result = nums[0]
        maxcount = 0
        map = {}
        for i in nums:
            if i in map:
                map[i] += 1
                if map[i] > maxcount:
                    result = i
                    maxcount = map[i]
            else:
                map[i] = 1
        return result
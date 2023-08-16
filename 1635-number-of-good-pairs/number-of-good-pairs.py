class Solution:
    def numIdenticalPairs(self, nums: List[int]) -> int:
        result = 0
        map = {}
        for it in nums:
            if it in map:
                result += map[it]
                map[it] += 1
            else:
                map[it] = 1
        return result

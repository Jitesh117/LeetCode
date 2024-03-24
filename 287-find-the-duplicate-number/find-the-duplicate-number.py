class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        map = {}
        for num in nums:
            if num in map:
                return num
            map[num] = 1
        return -1
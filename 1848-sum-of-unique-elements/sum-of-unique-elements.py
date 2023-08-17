class Solution:
    def sumOfUnique(self, nums: List[int]) -> int:
        map = {}
        result = 0
        for i in nums:
            if i in map:
               map[i] += 1
            else:
                map[i] = 1 
        for i in map:
            if map[i] == 1:
                result += i
        return result

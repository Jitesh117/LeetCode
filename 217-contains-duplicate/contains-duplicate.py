class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        numset = {}
        for i in nums:
            if i in numset:
                return True
            else:
                numset[i] = 1
        return False
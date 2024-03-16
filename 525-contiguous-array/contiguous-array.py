class Solution:
    def findMaxLength(self, nums: List[int]) -> int:
        pre = {0 : -1}
        total = 0
        result = 0
        for ind, val in enumerate(nums):
            if val == 0:
                total -= 1
            else:
                total += 1
            if total not in pre.keys():
                pre[total] = ind
            else:
                result = max(result, ind - pre[total])
        return result
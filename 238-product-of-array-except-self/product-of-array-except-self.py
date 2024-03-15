class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        zero_pos = []
        prod = 1
        for ind, elt in enumerate(nums):
            if elt == 0:
                zero_pos.append(ind)
            else:
                prod = prod * elt
        if len(zero_pos) > 1:
            return [0] * len(nums)
        
        if len(zero_pos) == 1:
            result = [0] * len(nums)
            result[zero_pos[0]] = prod
            return result

        for i in range(len(nums)):
            nums[i] = int(prod / nums[i])
        return nums
        


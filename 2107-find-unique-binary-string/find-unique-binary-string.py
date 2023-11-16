class Solution:
    def findDifferentBinaryString(self, nums: List[str]) -> str:
        result = ""
        for i in range(len(nums)):
            result += '0' if nums[i][i] == '1' else '1'
        return result
        
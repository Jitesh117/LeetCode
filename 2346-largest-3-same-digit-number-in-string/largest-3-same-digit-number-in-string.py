class Solution:
    def largestGoodInteger(self, nums: str) -> str:
         threes = ["999","888","777","666","555","444","333","222","111","000"]
         for three in threes:
            if three in nums:
                return three
         return ""
        
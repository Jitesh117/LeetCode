class Solution:
    def twoOutOfThree(self, nums1: List[int], nums2: List[int], nums3: List[int]) -> List[int]:
        one = set(nums1)
        two = set(nums2)
        three = set(nums3)

        return (one & two) | (one & three) | (two & three)
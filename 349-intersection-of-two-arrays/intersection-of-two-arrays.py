class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        result = []
        for elt in nums1:
            if elt in nums2 and elt not in result:
                result.append(elt)
        return result
    
        
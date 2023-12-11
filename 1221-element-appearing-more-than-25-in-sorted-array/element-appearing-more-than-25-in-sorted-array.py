class Solution:
    def findSpecialInteger(self, arr: List[int]) -> int:
        n = len(arr)
        map = {}
        for num in arr:
            if num in map:
                map[num] = map[num] + 1
            else:
                map[num] = 1
            if map[num] > n // 4:
                return num
        return -1
        
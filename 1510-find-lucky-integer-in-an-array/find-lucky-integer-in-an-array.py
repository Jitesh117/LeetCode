class Solution:
    def findLucky(self, arr: List[int]) -> int:
        map = {}
        result = -1
        for i in arr:
            if i not in map:
                map[i] = 1
            else:
                map[i] += 1
        for it in map:
            if map[it] == it:
                result = max(result, it)
        return result

class Solution:
    def destCity(self, paths: List[List[str]]) -> str:
        dest = {}
        arr = {}
        for cit in paths:
            arr[cit[0]] = 1
            dest[cit[1]] = 1
        for cit in dest:
            if cit not in arr:
                return cit
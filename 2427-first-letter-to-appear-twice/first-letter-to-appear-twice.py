class Solution:
    def repeatedCharacter(self, s: str) -> str:
        map = {}
        for i in s:
            if i in map:
                return i
            else:
                map[i] = 1
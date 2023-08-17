class Solution:
    def areOccurrencesEqual(self, s: str) -> bool:
        map = {}
        for i in s:
            if i not in map:
                map[i] = 1
            else:
                map[i] += 1
        prev = map[s[0]]
        for i in range(len(s)):
            if map[s[i]] != prev:
                return False

        return True


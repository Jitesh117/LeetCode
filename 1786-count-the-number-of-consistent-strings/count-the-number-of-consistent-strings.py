class Solution:
    def countConsistentStrings(self, allowed: str, words: List[str]) -> int:
        result = 0
        for word in words:
            consistent = True
            for char in word:
                if char not in allowed:
                    consistent = False
            if consistent == True:
                result += 1
        return result
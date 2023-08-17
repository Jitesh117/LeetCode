class Solution:
    def maximumNumberOfStringPairs(self, words: List[str]) -> int:
        wordset = set()
        result = 0
        for word in words:
            if word in wordset:
                result += 1
            else:
                wordset.add(word[::-1])
        return result
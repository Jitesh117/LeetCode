class Solution:
    def firstPalindrome(self, words: List[str]) -> str:
        for word in words:
            if word[::-1] == word:
                return word
        return ""

        
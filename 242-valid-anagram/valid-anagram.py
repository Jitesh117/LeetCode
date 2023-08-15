class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        # one = {}
        # two = {}
        # for i in s:
        #     if i in one:
        #         one[i] += 1
        #     else
        #         one[i] = 1
        # for i in t:
        #     if i in two:
        #         two[i] += 1
        #     else
        #         two[i] = 1
        if sorted(s) == sorted(t):
            return True
        return False
        
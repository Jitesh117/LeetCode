class Solution:
    def partitionLabels(self, s: str) -> List[int]:
        result = []
        last = {}
        for i in range(len(s)):
            last[s[i]] = i 
        
        prev = -1
        maxi = 0
        for i in range(len(s)):
            maxi = max(maxi, last[s[i]])
            if maxi == i:
                result.append(i - prev)
                prev = i
                
        return result


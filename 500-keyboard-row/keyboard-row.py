class Solution:
    def findWords(self, words: List[str]) -> List[str]:
        ans = []
        hash_ = {'q': 0, 'Q': 0, 'w': 0, 'W': 0, 'e': 0, 'E': 0, 
                 'r': 0, 'R': 0, 'T': 0, 't': 0, 'U': 0, 'u': 0,
                 'I': 0, 'i': 0, 'O': 0, 'o': 0, 'P': 0, 'p': 0,
                 'Y': 0, 'y': 0,
                 
                 'A': 1, 'a': 1, 'S': 1, 's': 1, 'D': 1, 'd': 1, 
                 'F': 1, 'f': 1, 'G': 1, 'g': 1, 'H': 1, 'h': 1, 
                 'J': 1, 'j': 1, 'K': 1, 'k': 1 ,'L': 1, 'l': 1,
                 
                 'Z': 2, 'z': 2, 'X': 2, 'x': 2, 'C': 2, 'c': 2, 
                 'V': 2, 'v': 2, 'B': 2, 'b': 2, 'N': 2, 'n': 2, 
                 'M': 2, 'm': 2
                }
        
        for word in words:
            temp = hash_[word[0]]
            is_one_row = True
            for e in word:
                if hash_[e] != temp:
                    is_one_row = False
                    break
            if is_one_row:
                ans.append(word)
        
        return ans
class Solution:
    def decodeMessage(self, key: str, message: str) -> str:
        map = {' ': ' '}
        letters = 'abcdefghijklmnopqrstuvwxyz'
        i = 0
        result = ''
        for char in key:
            if char not in map:
                map[char] = letters[i]
                i += 1
        for char in message:
            result += map[char]
        
        return result


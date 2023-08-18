class Solution:
    def mostCommonWord(self, paragraph: str, banned: List[str]) -> str:
        my_dict = defaultdict(int)
        par = re.split("[" + string.punctuation + " "+ "]+", paragraph.lower())
        max_count = 0
        max_word = ""
        for word in par:
            if word not in banned:
                my_dict[word]+=1
                if my_dict[word] > max_count:
                    max_count = my_dict[word]
                    max_word = word
        return max_word
        
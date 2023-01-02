class Solution {
public:
    bool detectCapitalUse(string word) {
        int count = 0;
        for(int i = 0;i<word.size();i++)
            if(isupper(word[i]))
                count++;
        if(count == 0 or count == word.size() or (count == 1 and isupper(word[0])))
            return true;
        return false;
    }
};
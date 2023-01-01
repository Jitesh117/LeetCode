class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string>chToWordMap;
        unordered_map<string, char>wordToChMap;
        s.push_back(' ');
        string currWord = "";
        int charindex = 0;
        for (int  i = 0; i < s.size(); i++)
        {
            if(s[i] == ' ')
            {
                char currCh = pattern[charindex++];
                if (chToWordMap.count(currCh))
                {
                    string alreadyMappedWord = chToWordMap[currCh];
                    if (alreadyMappedWord != currWord) return false;
                }
                else if (wordToChMap.count(currWord))
                {
                    char alreadyMappedCh = wordToChMap[currWord];
                    if (alreadyMappedCh != currCh) return false; 
                }
                else
                {
                    chToWordMap[currCh] = currWord;
                    wordToChMap[currWord] = currCh;
                }
        
                currWord = "";
            }
            else currWord.push_back(s[i]);
        }
        return (charindex == pattern.size());
    }
};
class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>result;
        for(auto it:words)
            if(solve(it,pattern))
                result.push_back(it);
        return result;
    }
    bool solve(string word,string pattern){
        unordered_map<char,char>m1,m2;
        for(int i = 0;i<word.size();i++){
            if(!m1[pattern[i]])
                m1[pattern[i]] = word[i];
            if(!m2[word[i]])
                m2[word[i]] = pattern[i];
            if(m1[pattern[i]]!=word[i] or m2[word[i]]!=pattern[i])
                return false;
        }
        return true;
    }
};
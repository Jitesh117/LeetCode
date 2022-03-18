class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       unordered_map<char,int> index;
        int starting = 0,res = 0;
        for(int i = 0;i<s.size();i++)
        {
            if(index.find(s[i])!=index.end() && index[s[i]]>=starting)
                starting = index[s[i]] +1;
            index[s[i]] = i;
            res = max(res,i-starting+1);
        }
        return res;
    }
};
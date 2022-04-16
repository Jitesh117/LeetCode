class Solution {
public:
    char findTheDifference(string s, string t) {
        int stotal=0,ttotal=0;
        for(int i = 0;i<s.size();i++)
            stotal+=s[i];
        for(int i = 0;i<t.size();i++)
            ttotal+=t[i];
        char result = ttotal-stotal;
        return result;
    }
};
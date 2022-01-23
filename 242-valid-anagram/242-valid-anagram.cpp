class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<char> f,l;
        if(s.size() != t.size())
            return false;
        for(int i = 0;i<s.size();i++)
        {
            f.push_back(s[i]);
            l.push_back(t[i]);
        }
        sort(f.begin(),f.end());
        sort(l.begin(),l.end());
        for(int i = 0;i<s.size();i++)
        {
            if(f[i]!=l[i])
                return false;
        }
        return true;
    }
};
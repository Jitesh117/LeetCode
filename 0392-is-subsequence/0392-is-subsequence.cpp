class Solution {
public:
    bool isSubsequence(string s, string t) {
      
        for(int i = 0;i<t.size() && s.size()!=0;i++)
        {
            if(s[0] == t[i])
            {
                s.erase(s.begin()+0);
            }
        }
        if(s.size() == 0)
            return true;
        return false;
    }
   
};
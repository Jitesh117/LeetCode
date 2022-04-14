class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
      unordered_set<char> a,b;
        int count = 0;
        for(int i = 0;i<s1.size();i++)
        {
            if(s1[i]!=s2[i])
            {   
                count++;
                a.insert(s1[i]);
                b.insert(s2[i]);
            }
        }
       return ((count == 0 || count == 2) && a == b);
    }
};
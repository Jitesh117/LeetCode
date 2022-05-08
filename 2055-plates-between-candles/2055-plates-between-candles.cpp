class Solution {
public:
    vector<int> platesBetweenCandles(string s, vector<vector<int>>& queries) {
        vector<int> c;
        for(int i = 0;i<s.size();i++)
        {
            if(s[i] == '|')
                c.push_back(i);
        }
        vector<int> ans;
        for(auto q:queries)
        {
            int first = lower_bound(c.begin(),c.end(),q[0]) - c.begin();
            int last  = upper_bound(c.begin(),c.end(),q[1])-c.begin()-1;
            if(first>=last)
                ans.push_back(0);
            else
            {
                ans.push_back(c[last]-c[first]-(last-first));
            }
        }
        return ans;
    }
    
        
};
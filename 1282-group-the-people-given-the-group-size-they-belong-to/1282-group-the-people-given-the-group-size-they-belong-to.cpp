class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& g) {
        int n = g.size();
        vector<vector<int>>result;
        unordered_map<int,vector<int>>m; 
        for(int i =0;i<n;i++){
           if(m[g[i]].size() <g[i])
               m[g[i]].push_back(i);
            if(m[g[i]].size() == g[i])
            {
               result.push_back(m[g[i]]);
                m[g[i]] = {};
            }
        }
        return result;
    }
};
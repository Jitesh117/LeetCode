class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& v) {
        unordered_map<int,int> w,l;
        for(int i = 0;i<v.size();i++)
        {
            w[v[i][0]]++;
            l[v[i][1]]++;
        }
        vector<int>nlost,onelost;
        vector<vector<int>>result;
        for(auto it:l)
              if(it.second == 1)
                onelost.push_back(it.first);
        for(auto it:w)
              if(!l[it.first])
                    nlost.push_back(it.first);
        sort(nlost.begin(),nlost.end());
        sort(onelost.begin(),onelost.end());
        result.push_back(nlost);
        result.push_back(onelost);
        
        return result;
    }
};
class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
       unordered_map<int,unordered_set<int>>m;
        vector<int>result(k);
        for(auto it:logs)
            m[it[0]].insert(it[1]);
        for(auto it:m)
            result[it.second.size()-1]++;
        return result;
            
    }
};
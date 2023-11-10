class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& pairs) {
        vector<int>result;
        unordered_map<int,vector<int>>map;
        for(auto it: pairs){
            map[it[0]].push_back(it[1]);
            map[it[1]].push_back(it[0]);
        }
        for(auto it: map){
            if(it.second.size() == 1){
                result.push_back(it.first);
                result.push_back(it.second[0]);
                break;
            }
        }
        while(result.size() < pairs.size() + 1){
            int last = result.back();
            int prev = result[result.size() - 2];
            auto next = map[last];
            if(prev != next[0]) result.push_back(next[0]);
            else result.push_back(next[1]);
        }
        return result;
    }
};
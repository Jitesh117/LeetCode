class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& v) {
        unordered_map<int,vector<int>>map;
        vector<int>result;
        int first_element = 0;
        for(int i = 0; i < v.size(); i++){
            map[v[i][0]].push_back(v[i][1]);
            map[v[i][1]].push_back(v[i][0]);
        }
        for(auto p: map){
            if(p.second.size() == 1){
                result.push_back(p.first);
                result.push_back(p.second[0]);
                break;
            }
        } 
       while (result.size() < v.size() + 1) {
        auto tail = result.back(), prev = result[result.size() - 2];
        auto next = map[tail];
        if (next[0] != prev)
            result.push_back(next[0]);
        else
            result.push_back(next[1]);
        }
        return result; 
    }
};
class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int result = 0;
        map<vector<int>,int> rowcount;
        for( auto v: grid){
            rowcount[v]++;
        }
        for(int i = 0;i<grid.size();i++){
            vector<int>v;
            for(int j = 0; j < grid.size(); j++){
                v.push_back(grid[j][i]);
            }
            result += rowcount[v];
        }
        return result;
    }
};
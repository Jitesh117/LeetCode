class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        vector<unordered_set<int>> grid(n);
        
        for ( auto& i: roads) {
            grid[i[0]].insert(i[1]);
            grid[i[1]].insert(i[0]);
        }
        int result = 0;
        for(int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int netrank = grid[i].size() + grid[j].size();
                if (grid[j].count(i))
                    netrank--;
                result = max(result, netrank);
            }
            
        }
        return result;
    }
};
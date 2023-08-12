class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>>dp(m+1, vector<int>(n+1, -1));
       return solve(0, 0, grid, dp); 
    }

    int solve(int i, int j, vector<vector<int>>& grid, vector<vector<int>>&dp){
        if(i == grid.size() or j == grid[0].size() or grid[i][j] == 1) return 0;

        if(i == grid.size()-1 and j == grid[0].size() - 1) return 1;

        if(dp[i][j] != -1) return dp[i][j];

        int right = solve(i+1, j, grid, dp);
        int down = solve(i, j+1, grid, dp);

        return dp[i][j] = right + down;
    }
};
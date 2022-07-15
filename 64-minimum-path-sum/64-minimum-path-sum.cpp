class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size(),m=grid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,0));
       return solve(0,0,grid,dp);
    }
    int solve(int i, int j, vector<vector<int>>&grid,vector<vector<int>>&dp)
    {
        if(i==grid.size()-1 and j == grid[i].size()-1)
            return grid[i][j];
        
        if(dp[i][j]!=0)
            return dp[i][j];
        
        else if(i == grid.size()-1)
            return dp[i][j] = grid[i][j]+solve(i,j+1,grid,dp);
        
        else if(j == grid[0].size()-1)
            return dp[i][j] = grid[i][j]+solve(i+1,j,grid,dp);
        
        return dp[i][j] = grid[i][j]+min(solve(i+1,j,grid,dp),solve(i,j+1,grid,dp));
    }
};
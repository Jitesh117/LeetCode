class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size(),m = grid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return solve(0,0,grid,n,m,dp);
    }
    int solve(int i,int j,vector<vector<int>>&grid,int n, int m,vector<vector<int>>&dp)
    {
        if( i == n-1 and j == m-1)
            return grid[i][j];
        if(i == n or j == m)
            return INT_MAX;
        if(dp[i][j]!=-1)return dp[i][j];
        int right = solve(i,j+1,grid,n,m,dp);
        int down = solve(i+1,j,grid,n,m,dp);
        
        return dp[i][j] = grid[i][j] + min(right,down);
    }
};
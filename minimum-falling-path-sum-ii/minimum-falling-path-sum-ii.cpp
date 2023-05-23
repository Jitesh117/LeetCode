class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& grid) {
       int n = grid.size();
       int result = 1e9;
       vector<vector<int>>dp(n, vector<int>(n+1,-1));
       for(int i = 0;i < n; i++){
           result = min(result, solve(0, -1, grid, dp));
       } 
       return result;
    }

    int solve(int i, int prev, vector<vector<int>>& grid, vector<vector<int>>&dp){
        if(i == grid.size()) return 0; 
        int result = 1e9;

        if(dp[i][prev + 1] != -1) return dp[i][prev+1];

        for(int j = 0;j<grid.size();j++){
            if( j != prev){
                int pick = grid[i][j] + solve(i+1, j, grid, dp);
                result = min(result, pick);
            }
        }
        return dp[i][prev + 1] = result;

    }
};
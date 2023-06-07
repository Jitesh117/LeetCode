class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
       int n = matrix.size();
       int m = matrix[0].size();
       int result = 0;

       vector<vector<int>>dp(n, vector<int>(m,-1));

       for(int i = 0; i < n; i++){
           for(int j = 0;j < m; j++){
               if(matrix[i][j] == '1'){
                   int side = solve(i, j, matrix, dp);
                   result = max(result, side * side);
               }
           }
       } 

       return result;
    }

    int solve(int i, int j, vector<vector<char>>& grid, vector<vector<int>>&dp){
        if(i >= grid.size() or j >= grid[0].size() or grid[i][j] == '0') return 0;

        if(dp[i][j] != -1) return dp[i][j];

        int right = solve(i + 1, j, grid, dp);
        int down = solve(i, j + 1, grid, dp);
        int diag = solve(i + 1, j + 1, grid, dp);

        return dp[i][j] = 1 + min({right, down, diag});
    }
};
class Solution {
public:
    int uniquePaths(int m, int n) {
       vector<vector<int>>dp(m,vector<int>(n,0));
       //return solve(m-1,n-1,dp); 
        for(int i = 0;i<m;i++)
            for(int j = 0;j<n;j++){
                if(i == 0 or j == 0) dp[i][j] = 1;
                else{
                    int left = 0,up = 0;
                    if(i>0)
                        left = dp[i-1][j];
                    if(j>0) 
                        up = dp[i][j-1];
                    dp[i][j] = up + left;
                }
            }
        return dp[m-1][n-1];
    }
    int solve(int i, int j, vector<vector<int>>&dp){
        if(i == 0 or j == 0) return 1;
        if(i<0 or j<0) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        
        int left = solve(i-1,j,dp);
        int up = solve(i,j-1,dp);
        
        return dp[i][j] = left + up;
    }
};
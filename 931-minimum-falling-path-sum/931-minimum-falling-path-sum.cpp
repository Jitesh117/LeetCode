class Solution {
public:
    int n;
    int minFallingPathSum(vector<vector<int>>& v) {
        n=v.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        int result = INT_MAX;
        for(int j = 0;j<n;j++)
            result=min(result,solve(v,0,j,dp));
        return result;
    }
    int solve(vector<vector<int>>&v,int i,int j,vector<vector<int>>&dp)
    {
        if(j<0 or j == n)
            return INT_MAX;
        if(i == n-1)
            return v[i][j];
        if(dp[i][j]!=-1)
            return dp[i][j];
        int dleft = solve(v,i+1,j-1,dp);
        int dright = solve(v,i+1,j+1,dp);
        int down = solve(v,i+1,j,dp);
        
        return dp[i][j] = min(dleft,min(dright,down)) + v[i][j];
    }
};
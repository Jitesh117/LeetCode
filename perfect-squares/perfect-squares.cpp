class Solution {
public:
    int numSquares(int n) {
        vector<int>dp(n+1,-1);
       return solve(n, dp); 
    }
    int solve(int n, vector<int>&dp){
        if(n == 0) return 0;
        if(dp[n] != -1) return dp[n];
        int result = INT_MAX;
        for(int i = 1; i*i <=n; i++){
            result = min(result, 1 + solve(n - i*i, dp));
        }
        return dp[n] = result;
    }
};
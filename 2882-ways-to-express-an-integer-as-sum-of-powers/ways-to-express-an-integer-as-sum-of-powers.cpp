class Solution {
public:
    int mod = 1000000007;
    int numberOfWays(int n, int x) {
        vector<vector<int>> dp(n +1, vector<int>(n+1, -1));
       return solve(1, n, x, dp); 
    }
    
    int solve(int i, int n, int &x, vector<vector<int>>& dp){
       if(pow(i, x) > n or i > n or n < 0) return 0; 
        if(pow(i, x) == n) return 1;
        if(dp[i][n] != -1) return dp[i][n];
        int take = solve(i + 1, n - pow(i, x), x, dp) % mod;
        int nontake = solve(i + 1, n, x, dp) % mod;
    
        return dp[i][n] = (take + nontake) % mod;
    }
};
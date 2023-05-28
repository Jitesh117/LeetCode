class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int>dp(n+1,-1);
       return min(solve(n-1, cost, dp), solve(n-2, cost, dp)); 
    }
    int solve(int i, vector<int>&cost, vector<int>&dp){
        if( i == 1 or i == 0) return dp[i] = cost[i];

        if(dp[i] != -1) return dp[i];

        int oneStep = cost[i] + solve(i-1, cost, dp);
        int twoStep = cost[i] + solve(i-2, cost, dp);

        return dp[i] = min(oneStep, twoStep);
    }
};
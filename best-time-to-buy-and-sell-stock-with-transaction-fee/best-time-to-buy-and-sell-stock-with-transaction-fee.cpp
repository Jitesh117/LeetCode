class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        vector<vector<int>>dp(n+1,vector<int>(2,-1));
       return solve(0, true, fee, prices, dp); 
    }
    int solve(int i, bool buy, int fee, vector<int>&prices, vector<vector<int>>&dp){
        if(i == prices.size()) return 0;
        int profit = 0;
        if(dp[i][buy] != -1) return dp[i][buy];
        if(buy){
            int take = -prices[i] + solve(i+1, false, fee, prices, dp);
            int nonTake = solve(i+1, true, fee, prices, dp);
            profit = max(take, nonTake);
        }
        else{
            int sell = prices[i] - fee + solve(i+1, true, fee, prices, dp);
            int nonSell = solve(i+1, false, fee, prices, dp);
            profit = max(sell, nonSell);
        }
        return dp[i][buy] = profit;
    }
};
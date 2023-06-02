class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int cap = 2;
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(cap+1,-1)));
       return solve(0, true, cap, prices, dp); 
    }
    int solve(int i, bool buy, int cap, vector<int>&prices, vector<vector<vector<int>>>&dp){
        if(i == prices.size() or cap == 0) return 0;

        if(dp[i][buy][cap] != -1) return dp[i][buy][cap];
        int profit = 0;
        if(buy){
            int take = -prices[i] + solve(i+1, false, cap, prices, dp);
            int nonTake = solve(i+1, true, cap, prices, dp);
            profit = max(take, nonTake);
        }
        else{
            int sell = prices[i] + solve(i+1, true, cap -1, prices, dp);
            int nonSell = solve(i+1, false, cap, prices, dp);

            profit = max(sell, nonSell);
        }
        return dp[i][buy][cap] = profit;
    }
};
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = 1;
        int n = prices.size();
        int dp[n+1][2];
        dp[n][0] = dp[n][1] = 0;
        for(int ind = n-1;ind>=0;ind--){
            for(int buy = 0;buy<=1;buy++){
                int profit = 0;
            if(buy){
                 profit = max(-prices[ind] + dp[ind+1][0], dp[ind+1][1]); 
                }
            else
                profit = max(prices[ind] + dp[ind+1][1],dp[ind+1][0]);
                
            dp[ind][buy] = profit;
            }
        }
        return dp[0][1];
    }
};
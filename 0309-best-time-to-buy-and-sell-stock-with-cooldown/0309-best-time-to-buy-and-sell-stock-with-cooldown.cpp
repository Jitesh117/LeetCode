class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<vector<int>>dp(prices.size()+2,vector<int>(2,0));
        int n = prices.size();
        for(int ind = n-1;ind>=0;ind--){
            for(int buy = 0;buy<=1;buy++){
                if(buy)
                    dp[ind][buy] = max(-prices[ind] + dp[ind+1][0], dp[ind+1][1]);
                else
                    dp[ind][buy] = max(prices[ind] + dp[ind+2][1], dp[ind+1][0]);
            }
        }
        return dp[0][1];
    }
};
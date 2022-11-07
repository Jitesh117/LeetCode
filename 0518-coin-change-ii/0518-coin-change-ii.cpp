class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        int dp[n][amount+1];
        for(int i = 0;i<=amount;i++)
            dp[0][i] = (i%coins[0] == 0);
        for(int i = 1;i<n;i++)
            for(int t = 0;t<=amount;t++){
               int nontake = dp[i-1][t];
               int take = 0;
                if(coins[i]<=t)
                    take = dp[i][t-coins[i]];
                dp[i][t] = take + nontake;
            }
       return dp[n-1][amount];
    }
};
class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<int>>dp(n+1, vector<int>(amount+1,-1));
       return solve(n - 1, amount, coins, dp); 
    }
    int solve(int i, int amount, vector<int>& coins,vector<vector<int>>& dp){
        if(i == 0){
            return amount % coins[i] == 0;
        }
        if(dp[i][amount] != -1) return dp[i][amount];
        int take = 0;
        int nonTake = solve(i-1, amount, coins, dp);
        if(coins[i] <= amount){
            take = solve(i, amount - coins[i], coins, dp);
        }
        return dp[i][amount] = take + nonTake;
    }
};
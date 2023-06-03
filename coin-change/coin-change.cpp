class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>>dp(n+1, vector<int>(amount + 1, -1));
        int result = solve(n - 1, coins, amount, dp);

        return result >= 1e9? -1 : result;
    }

    int solve(int i, vector<int>& coins, int amount, vector<vector<int>>&dp){
        if(i == 0){
             return dp[i][amount] = amount % coins[i] == 0? amount / coins[i] : 1e9;
        }

        if(dp[i][amount] != -1) return dp[i][amount];

        int take = 1e9;
        int nonTake = solve(i - 1, coins, amount, dp);
        if(coins[i] <= amount) take = 1 + solve(i, coins, amount - coins[i], dp);

        return dp[i][amount] = min(take, nonTake);
    }
};
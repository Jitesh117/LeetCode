class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        int result = solve(n-1,coins,amount,dp);
        if(result >=1e9) return -1;
        return result;
    }
    int solve(int ind, vector<int>&coins,int amount,vector<vector<int>>&dp){
        if(ind ==0){
            if(amount%coins[ind] == 0) return amount/coins[ind];
            return INT_MAX;
        }
        if(dp[ind][amount]!=-1) return dp[ind][amount];
        int nontake = solve(ind-1,coins,amount,dp);
        int take  = 1e9;
        if(coins[ind]<=amount) take = 1+solve(ind,coins,amount-coins[ind],dp);
        
        return dp[ind][amount] = min(take,nontake);
    }
};
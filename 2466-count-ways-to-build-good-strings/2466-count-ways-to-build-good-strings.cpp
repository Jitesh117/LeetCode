class Solution {
public:
    int mod = 1e9 + 7;
    int countGoodStrings(int low, int high, int zero, int one) {
       vector<int>dp(high+1,-1);
       return solve(0, low, high, zero, one, dp); 
    }
    int solve(int i, int &low, int &high, int &zero, int &one, vector<int>&dp){
       if(i > high) return 0;
        
       if(dp[i] != -1) return dp[i];
        
       int result = 0;
       if( i >= low) result++;
        
        return dp[i] = (result + solve(i+zero, low, high, zero, one, dp) + solve(i + one, low, high, zero, one, dp)) % mod;
    }
};
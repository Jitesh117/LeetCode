class Solution {
public:
    int dp[31][1001] = {};
    int mod = 1e9 + 7;
    int numRollsToTarget(int n, int k, int target,int result = 0) {
        if(n == 0 or target <= 0) return n == target;
        if(dp[n][target]) 
            return dp[n][target] - 1;

        for(int i = 1; i <= k; i++)
            result = (result + numRollsToTarget(n - 1, k, target - i)) % mod;
        dp[n][target] = result + 1;
        return result;
    }
};
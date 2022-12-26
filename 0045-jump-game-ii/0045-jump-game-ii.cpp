class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n,1e9);
        dp[n-1] = 0;
        for(int i = n-2;i>=0;i--)
            for(int j = 1;j<=nums[i];j++)
                dp[i] = min(dp[i],1 + dp[min(n-1,i+j)]);
        return dp[0];
        
    }
    int solve(int i, vector<int>&nums, vector<int>&dp){
        if(i >= nums.size()-1)
            return 0;
        if(dp[i] != 1e9) return dp[i];
        int result = 1e9;
       for(int j = 1;j<=nums[i];j++)
          result = min(result,1 + solve(i+j,nums,dp)); 
        return dp[i] = result;
    }
};
class Solution {
public:
    int jump(vector<int>& nums) {
        vector<int>dp(nums.size(),1e9); 
        return solve(0,nums,dp);        
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
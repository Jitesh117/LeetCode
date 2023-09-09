class Solution {
public:
       
    int combinationSum4(vector<int>& nums, int target) {
        vector<int>dp(target + 1, -1);
        return solve(nums, target, dp);
    }
    int solve(vector<int>&nums,int target,vector<int>&dp) {
        int result = 0;
        if(target == 0) return 1;
        if(dp[target] != -1) return dp[target];
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] <= target)
                result += solve(nums, target - nums[i], dp);
        }
        return dp[target] = result;
    }
};
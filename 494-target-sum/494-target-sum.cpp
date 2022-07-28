class Solution {
public:
    int mod = (int)1e9 + 7;
    int solve(int ind, int sum, vector<int> &nums, vector<vector<int>> &dp)
    {
        if (ind == 0)
        {
            if (sum == 0 and nums[ind] == 0)
                return 2;
            if (sum == 0 or nums[ind] == sum)
                return 1;
            return 0;
        }
        if (dp[ind][sum] != -1)
            return dp[ind][sum];
        int take = 0;
        int nontake = solve(ind - 1, sum, nums, dp);
        if (nums[ind] <= sum)
            take = solve(ind - 1, sum - nums[ind], nums, dp);
        return dp[ind][sum] = take + nontake;
    }
    int countPartitions(int n, int d, vector<int> &arr)
    {
        int totSum = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            totSum += arr[i];
        }

        // Checking for edge cases
        if (totSum - d < 0)
            return 0;
        if ((totSum - d) % 2 == 1)
            return 0;

        int s2 = (totSum - d) / 2;

        vector<vector<int>> dp(n, vector<int>(s2 + 1, -1));
        return solve(n - 1, s2, arr, dp);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        return countPartitions(nums.size(),target,nums);
    }
};
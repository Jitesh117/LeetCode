class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int n = nums.size();

        vector<int> dp(n,1) , cnt(n,1);

        int maxi = 1;
        for(int i = 0 ; i < n ; i++){
            for(int prev = 0 ; prev < i ; prev++){
                if(nums[prev] < nums[i] and dp[prev] + 1 > dp[i]){
                    dp[i] = dp[prev] + 1;
                    cnt[i] = cnt[prev];
                }
                else if(nums[prev] < nums[i] and dp[prev] + 1 == dp[i]){
                    cnt[i] += cnt[prev];
                }
            }
            maxi = max(maxi, dp[i]);
        }

        int ans = 0;

        for(int i = 0 ; i < n ; i++){
            if(dp[i] == maxi) ans+=cnt[i];
        }

        return ans;
    }
};
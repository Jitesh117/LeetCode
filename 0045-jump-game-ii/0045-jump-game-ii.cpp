class Solution {
public:
    int jump(vector<int>& nums) {
	vector<int> dp(size(nums), 1e9);
	return solve(nums, dp, 0);
}
int solve(vector<int>& nums, vector<int>& dp, int pos) {
	if(pos >= size(nums) - 1) return 0;   
	if(dp[pos] != 1e9) return dp[pos]; 
	for(int j = 1; j <= nums[pos]; j++)
		dp[pos] = min(dp[pos], 1 + solve(nums, dp, pos + j));        
	return dp[pos];
}
};
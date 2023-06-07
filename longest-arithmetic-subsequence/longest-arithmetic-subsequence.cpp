class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) {
	if (nums.size() == 2) {
		return 2;
	}
	int len = nums.size();
	int result = 1;
	vector<vector<int>> dp(nums.size(), vector<int>(1001, 1));
	for (int i = 1; i < nums.size(); i++) {
		for (int j = 0; j < i; j++) {
			int index = nums[i] - nums[j] + 500;
			dp[i][index] = max(dp[i][index], dp[j][index] + 1);
			result = max(result, dp[i][index]);
		}
	}
	return result;
}
};
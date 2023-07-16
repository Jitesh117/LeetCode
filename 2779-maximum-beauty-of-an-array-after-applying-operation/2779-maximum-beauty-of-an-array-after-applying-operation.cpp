class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int i = 0, j, n = nums.size();
        for (j = 0; j < n; ++j)
            if (nums[j] - nums[i] > k * 2)
                i++;
        return n - i;
    }
};
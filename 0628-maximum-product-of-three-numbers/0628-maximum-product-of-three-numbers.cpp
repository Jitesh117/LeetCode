class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.rbegin(),nums.rend());
        int n = nums.size();
        int left = nums[0]*nums[1]*nums[2];
        int right = nums[0]*nums[n-1]*nums[n-2];
        return left>right?left:right;
    }
};
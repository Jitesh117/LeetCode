class Solution {
public:
    int minPairSum(vector<int>& nums) {
       sort(nums.begin(), nums.end());
       int i = 0, j = nums.size() - 1;
       int result = INT_MIN;
       while(i < j){
           result = max(result, nums[i++] + nums[j--]);
       } 
       return result;
    }
};
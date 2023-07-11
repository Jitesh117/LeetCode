class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int result=INT_MAX;
        int temp=0;
        for(int left = 0,right=0;right<nums.size();right++){
            temp += nums[right];
            while(temp>=target and left<=right){
                temp -= nums[left];
                result = min(result, right - left + 1);
                left++;
            }
        }
        return result == INT_MAX? 0 : result;
    }
};
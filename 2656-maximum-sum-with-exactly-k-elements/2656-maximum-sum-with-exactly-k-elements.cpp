class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int result = 0;
        int i = 0;
        while(k--){
            result += nums.back();
            nums[nums.size() -1]+=1;
        }
        return result;
    }
};
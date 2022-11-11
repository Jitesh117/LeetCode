class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;
        for(int i = 1;i<nums.size();i++){
            if(nums[i-1] == nums[i])
            {
                nums[i-1] = INT_MAX;
                k++;
            }
        }
        sort(nums.begin(),nums.end());
        return nums.size()-k;
        
    }
};
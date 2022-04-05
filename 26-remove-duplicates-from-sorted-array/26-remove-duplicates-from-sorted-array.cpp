class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;
        for(int i = 0;i<nums.size()-1;i++)
        {
            if(nums[i] == nums[i+1])
            {
                k++;
                nums[i] = INT_MAX;
            }
        }
        
        sort(nums.begin(),nums.end());
        return nums.size()-k;
    }
};
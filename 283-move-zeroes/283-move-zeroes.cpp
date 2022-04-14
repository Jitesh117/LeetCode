class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       for(int i = nums.size()-1;i>=0;i--)
       {
           if(nums[i] == 0)
           {
               for(int j = i;j<nums.size()-1;j++)
                   swap(nums[j],nums[j+1]);
           }
       }
    }
};
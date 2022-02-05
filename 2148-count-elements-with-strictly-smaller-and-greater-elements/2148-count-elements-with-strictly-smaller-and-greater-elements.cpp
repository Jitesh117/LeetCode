class Solution {
public:
    int countElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count = 0;
        int M = nums[nums.size()-1],m = nums[0];
        for(int i = 0;i<nums.size();i++)
        {
            if(nums[i]<M && nums[i] > m)
                count++;
        }
        
        return count;
    }
};
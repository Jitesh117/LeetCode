class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int>sum(n,0);
        sum[0]=nums[0];
        for(int i = 1;i<nums.size();i++)
        {
            sum[i]=sum[i-1]+nums[i];
        }
        int total = accumulate(nums.begin(),nums.end(),0);
        for(int i = 0;i<nums.size();i++)
        {
            int left = sum[i]-nums[i];
            int right = total-left-nums[i];
            if(left == right)
                return i;
        }
        
        return -1;
    }
};
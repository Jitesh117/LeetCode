class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int beg=0, end=nums.size()-1, mid, num;
        
        while(beg < end)
        {
            mid = beg+(end-beg)/2;
            if(mid%2 == 0)
                num = mid+1;
            else
                num = mid-1;
           
            if(nums[mid]==nums[num]) 
                beg = mid+1;
            else
                end = mid;
        }
        return nums[beg];
    }
};
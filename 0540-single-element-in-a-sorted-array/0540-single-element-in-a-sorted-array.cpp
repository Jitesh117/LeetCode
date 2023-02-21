class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()==1) 
            return nums[0];
        int beg=0, end=nums.size()-1;
        
        while(beg < end)
        {
            int mid = beg+(end-beg)/2;
            int temp;
            if(mid%2 == 0)
                temp = mid+1;
            else
                temp = mid-1;
           
            if(nums[mid]==nums[temp]) 
                beg = mid+1;
            else
                end = mid;
        }
        return nums[beg];
    }
};
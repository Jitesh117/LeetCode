class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0, end = nums.size()-1;
        int n = nums.size();
        if(n == 1)
            return nums[0];
        while (start<=end)
        {
            int mid= start+ (end-start)/2;
            int prev=(mid+n-1)%n;
            int next= (mid+1)%n;
            if (nums[mid]<nums[prev] && nums[mid]<nums[next])
                return nums[mid];
            else if(nums[end]<nums[mid])
                start = mid+1;
            else 
                end= mid-1;
        }
        return -1;
    }
};
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v;
        v.push_back(first(nums,target));
        v.push_back(last(nums,target));
        return v;
    }
    int first(vector<int>& nums,int target)
    {
        int fpos=-1;
        int beg = 0,end = nums.size()-1;
        while(beg<=end)
        {
            int mid = beg + (end-beg)/2;
            if(nums[mid] == target)
            {
                fpos=mid;
                end=mid-1;
            }
            else if(nums[mid]<target)
                beg=mid+1;
            else
                end = mid-1;
        }
        return fpos;
    }
     int last(vector<int>& nums,int target)
    {
        int lpos=-1;
        int beg = 0,end = nums.size()-1;
        while(beg<=end)
        {
            int mid = beg + (end-beg)/2;
            if(nums[mid] == target)
            {
                lpos=mid;
                beg=mid+1;
            }
            else if(nums[mid]<target)
                beg=mid+1;
            else
                end = mid-1;
        }
        return lpos;
    }
};
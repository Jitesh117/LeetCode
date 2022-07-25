class Solution {
public:
    // vector<int>result;
    vector<int> searchRange(vector<int>& nums, int target) {
        return {first(nums,target),last(nums,target)};
    }
    int first(vector<int>&nums,int target)
    {
        int beg = 0,end = nums.size()-1;
        int fpos=-1;
        while(beg<=end){
            
            int mid = beg+(end-beg)/2;
            if(nums[mid] == target){
                fpos = mid;
                end = mid-1;
            }
            else if(nums[mid]<target)
                beg = mid+1;
            else
                end = mid-1;
        }
        return fpos;
    }
    int last(vector<int>&nums,int target){
        int beg = 0,end = nums.size()-1;
        int lpos=-1;
        while(beg<=end){
            int mid = beg+(end-beg)/2;
            if(nums[mid] == target){
                lpos = mid;
                beg = mid+1;
            }
            else if(nums[mid]<target)
                beg = mid+1;
            else
                end = mid-1;
        }
        return lpos;
    }
};
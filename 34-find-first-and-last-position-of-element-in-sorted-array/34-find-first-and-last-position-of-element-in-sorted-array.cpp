class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        return {first(nums,target),last(nums,target)};
        
    }
    int first(vector<int>&nums,int target){
        int firstpos = -1;
        int beg = 0,end = nums.size()-1;
        while(beg<=end){
            int mid = beg+(end-beg)/2;
            if(nums[mid] == target){
                firstpos = mid;
                end = mid-1;
            }
            else if(nums[mid] < target) beg = mid+1;
            else end = mid-1;
        }
        return firstpos;
    }
    
    int last(vector<int>&nums,int target){
        int lastpos = -1;
        int beg = 0,end = nums.size()-1;
        while(beg<=end){
            int mid = beg+(end-beg)/2;
            if(nums[mid] == target){
                lastpos = mid;
                beg = mid+1;
            }
            else if(nums[mid] < target) beg = mid+1;
            else end = mid-1;
        }
        return lastpos;
    }
};
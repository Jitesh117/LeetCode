class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int cur = 1;
        while(k){
            if(!binsearch(arr,cur))
                k--;
            cur++;
        }
        return cur-1;
    }
    bool binsearch(vector<int>&arr, int target){
        int beg = 0,end = arr.size()-1;
        while(beg<=end){
            int mid = beg + (end-beg)/2;
            if(arr[mid] == target) return true;
            else if(arr[mid] < target) beg = mid+1;
            else end = mid-1;
        }
        return false;
    }
};
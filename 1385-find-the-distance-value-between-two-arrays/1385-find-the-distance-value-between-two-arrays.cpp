class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(),arr2.end());
        int count = 0;
        for(auto it:arr1){
            if(binsearch(arr2,it,d))
                count++;
        }
        return count;
    }
    bool binsearch(vector<int>&arr,int target,int d){
        int beg = 0,end = arr.size()-1;
        while(beg<=end){
            int mid = beg + (end-beg)/2;
            if(abs(arr[mid] - target)<=d) return false;
            else if(arr[mid]<target) beg = mid+1;
            else end = mid-1;
        }
        return true;
    }
};
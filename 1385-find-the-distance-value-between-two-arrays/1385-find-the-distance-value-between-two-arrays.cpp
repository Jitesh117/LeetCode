class Solution {
public:
    
    
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        
        sort(arr2.begin(),arr2.end());
        
        int count = 0;
        for(auto i:arr1){
           if(bin(arr2,i,d)){
               count++;
           } 
        }
        
        return count;
    }
    bool bin(vector<int>&arr,int target,int d){
        
        int low = 0, high = arr.size() - 1;
        while(low <= high){
            
            int mid = low + (high - low)/2;
            if(abs(arr[mid] - target) <= d){
                return false;
            }
            else if(arr[mid] < target){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
            
        }
        return true;
    }
};
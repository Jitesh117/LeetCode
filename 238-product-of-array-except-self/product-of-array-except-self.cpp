class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       int zcount = 0;
       vector<int>result = nums;
       for(auto it: nums){
           if(it == 0) zcount++;
       } 
       if(zcount > 1) return vector<int>(nums.size(),0);
       int prod = 1;
       for(auto it: nums){
           if(it) prod *= it;
       }  
       for(auto &it: result){
           if(zcount){
               it = it ? 0 : prod;
           }
           else
               it = prod / it;
       }
       return result;
    }
};
class Solution {
public:
    int maxProduct(vector<int>& nums) {
     int result = INT_MIN,prod = 1;
     for(auto it: nums){
         prod*=it;
         result = max(result,prod);
         if(prod == 0) prod = 1;
     } 
        prod = 1;
       for(int i = nums.size()-1;i>=0;i--){
           prod*=nums[i];
           result = max(result,prod);
           if(prod == 0) prod = 1;
       }
        return result;
    }
};
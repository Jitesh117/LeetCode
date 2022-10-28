class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int result = INT_MIN, sum = 0;
        for(auto it: nums){
            sum+=it;
            result = max(result,sum);
            if(sum< 0 ) sum = 0;
        }
        return result;
    }
};
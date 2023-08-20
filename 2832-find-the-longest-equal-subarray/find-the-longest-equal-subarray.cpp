class Solution {
public:
    int longestEqualSubarray(vector<int>& nums, int k) {
       int result = 0;
       int i = 0, n = nums.size();
       unordered_map<int, int> count;
       for(int j = 0; j < n; j++){
           result = max(result, ++count[nums[j]]);
           if(j - i + 1 - result > k)
                count[nums[i++]]--;
       } 
       return result;
    }
};
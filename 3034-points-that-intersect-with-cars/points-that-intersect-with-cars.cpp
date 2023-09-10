class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
       unordered_map<int, int> result;
       for(int i = 0; i < nums.size(); i++){
           for(int j = nums[i][0]; j <= nums[i][1]; j++){
               result[j]++;
           }
       } 
       return result.size();
    }
};
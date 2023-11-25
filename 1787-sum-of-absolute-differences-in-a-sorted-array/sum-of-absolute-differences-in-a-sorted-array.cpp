class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size();
        vector<int>prefix(n, 0),suffix(n, 0);
        vector<int>result;
        for(int i = 1; i < n; i++){
            prefix[i] = nums[i - 1] + prefix[i - 1];
        }
        for(int i = n - 2; i >= 0; i--){
            suffix[i] = nums[i + 1] + suffix[i + 1];
        } 
        for(int i = 0; i < n; i++){
            result.push_back(nums[i] * i - prefix[i] + suffix[i] - nums[i] * (n - i - 1));
        }
        return result;
    }
};
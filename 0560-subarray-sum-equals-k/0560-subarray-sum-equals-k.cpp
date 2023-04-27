class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>umap;
        umap[0] = 1;
        int sum = 0;
        int result = 0;
        for(auto it : nums){
           sum += it; 
           result += umap[sum - k];
           umap[sum]++;
        }
        return result;
    }
};
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> shuf;
        for(int i = 0;i<n;i++)
        {
            shuf.push_back(nums[i]);
            shuf.push_back(nums[i+n]);
        }
        return shuf;
    }
};
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int> indices;
        int i = 0;
        while(i<nums.size() && nums[i]<=target)
        {
            if(nums[i] == target)
                indices.push_back(i);
            i++;
        }
        return indices;
    }
};
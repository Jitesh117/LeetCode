class Solution {
public:
    long long countOperationsToEmptyArray(vector<int>& nums) {
        unordered_map<int, int> pos;
        int n = nums.size(), p = 0;
        long long result = n;
        for (int i = 0; i < n; ++i)
            pos[nums[i]] = i;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; p = pos[nums[i++]])
            if (pos[nums[i]] < p)
                result += n - i;
        return result;
    }
};
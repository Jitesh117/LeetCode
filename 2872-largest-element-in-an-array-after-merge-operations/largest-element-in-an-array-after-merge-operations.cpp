class Solution {
public:
    long long maxArrayValue(vector<int>& nums) {
        long long result = 0;   
    int n = nums.size();
    if (n == 1) return nums[0];
    vector<long long> v;
    for(auto it: nums){
        v.push_back(it);
    }    
    
    for (int i = n - 1; i > 0; i--) {
        if (v[i] >= v[i - 1]) {
            v[i - 1] += v[i];
            long long t = v[i - 1];
            result = max(result, t);
        }
    }

    for (long long it : v) {
        result = max(it, result);
    }

    return result;
    }
};
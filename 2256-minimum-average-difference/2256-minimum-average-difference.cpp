class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
         int result = 0, n = nums.size(), mi = INT_MAX;
        vector<long long> pref(n);
        pref[0] = nums[0];
        for (int i = 1; i < n; i++)
            pref[i] = pref[i - 1] + nums[i];
        for (int i = 0; i < n; i++) {
            long long  temp = abs((pref[i] / (i + 1)) - ((pref[n - 1] - pref[i]) / max(n - i - 1, 1)));
            if (temp < mi) {
                mi = temp;
                result = i;
            }
        }
        return result;
    }
};
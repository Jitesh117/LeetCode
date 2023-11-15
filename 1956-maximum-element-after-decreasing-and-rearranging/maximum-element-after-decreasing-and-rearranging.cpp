class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int result = 0;
        for (int& a : arr)
            result = min(result + 1, a);
        return result;
    }
};
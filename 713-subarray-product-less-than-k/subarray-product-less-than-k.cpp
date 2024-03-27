class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& v, int k) {
        int result = 0;
        long long mul = 1;
        for(int left = 0, right = 0;right < v.size(); right++){
            mul *= v[right];
            while(left <= right and mul >= k){
                mul /= v[left];
                left++;
            }
           result += right - left + 1;
        }
        return result;
    }
};
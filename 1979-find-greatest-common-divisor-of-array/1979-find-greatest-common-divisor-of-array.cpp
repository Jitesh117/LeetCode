class Solution {
public:
    int findGCD(vector<int>& nums) {
        int minval = INT_MAX;
        int maxval = INT_MIN;
        for(auto &it: nums){
            minval = min(minval, it);
            maxval = max(maxval, it);
        }
        return gcdValue(maxval, minval);
    }
    
    int gcdValue(int a, int b){
        return b == 0 ? a : gcd(b, a % b);
    }
};
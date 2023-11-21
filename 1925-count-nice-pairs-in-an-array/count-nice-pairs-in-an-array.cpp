class Solution {
public:
    int countNicePairs(vector<int>& nums) {
       unordered_map<int, int> map;
       int mod = 1e9 + 7;
       int result = 0;
       for(int i = 0; i < nums.size(); i++){
           result = (result + (map[nums[i] - rev(nums[i])]++)) % mod; 
       } 
       return result;
    }
    int rev(int n){
        int result = 0;
        while(n > 0){
            result = result * 10 + n % 10;
            n /= 10;
        }
        return result;
    }
};
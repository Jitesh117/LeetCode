class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        unordered_map<int,int> count;
        for(int i = 0;i<nums.size();i++){
            int rev = reverseNum(nums[i]);
            count[nums[i]]++;
            count[rev]++;
        }
       return count.size();
    }
    int reverseNum(int n){
        int result = 0;
        while(n){
            result = result*10 + n%10;
            n/=10;
        }
        return result;
    }
};
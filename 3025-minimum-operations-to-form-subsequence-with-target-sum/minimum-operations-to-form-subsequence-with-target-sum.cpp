class Solution {
public:
    int minOperations(vector<int>& nums, int target) {
        long long tot = accumulate(nums.begin(), nums.end(), 0L), res = 0;
        if(tot < target) return -1;
        sort(nums.begin(), nums.end());
        while(target > 0){
            int a = nums.back();
            nums.pop_back();
            if(tot - a >= target)
                tot -= a;
            else if(a <= target){
                tot -= a;
                target -= a;
            }
            else {
                nums.push_back(a/2);
                nums.push_back(a/2);
                res += 1;
            }
        }
        return res;
    }
};
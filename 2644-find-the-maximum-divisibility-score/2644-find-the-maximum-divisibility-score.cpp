class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        sort(divisors.begin(),divisors.end());
        int ans = divisors[0];
        int mcnt = 0;
        for(auto i:divisors){
            int cnt = 0;
            for(auto n:nums){
               if(n % i == 0)cnt++;
            }
            if(mcnt < cnt) {
                ans = i;
                mcnt = cnt;
            }
        }
        return ans;
    }
};
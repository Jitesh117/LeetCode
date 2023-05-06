class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        vector<int>v = nums;
        sort(v.begin(),v.end());
        
        int n = v.size();
        int l = 0, r = n-1;
        int mod = 1e9 + 7; 
        long long result  = 0;
        
        vector<int> pows(n, 1);
        for (int i = 1 ; i < n ; ++i)
            pows[i] = pows[i - 1] * 2 % mod;
        
        while( l <= r){
            if(v[l] + v[r] <= target){
                result = (result + pows[r -l]) % mod;
               l++;
            }
            else
                r--;
        }
        return result;
    }
};
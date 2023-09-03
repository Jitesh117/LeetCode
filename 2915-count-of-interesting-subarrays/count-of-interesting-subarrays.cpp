class Solution {
public:
    long long countInterestingSubarrays(vector<int>& A, int mod, int k) {
        long long res = 0;
        int acc = 0;
        unordered_map<int, int> count;
        count[0] = 1;
        for (int a : A) {
            acc = (acc + (a % mod == k ? 1 : 0)) % mod;
            res += count[(acc - k + mod) % mod];
            count[acc]++;
        }
        return res;
    }
};
class Solution {
public:
    int maxIncreasingGroups(vector<int>& usage) {
        sort(usage.begin(), usage.end());
        long long total = 0, k = 0;
        for (int a : usage) {
            total += a;
            if (total >= (k + 1) * (k + 2) / 2)
                k++;
        }
        return k; 
    }    
};
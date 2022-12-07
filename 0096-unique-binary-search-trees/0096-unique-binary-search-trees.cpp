class Solution {
public:
    int dp[20] = {0};
    int numTrees(int n) {
        if(n <= 1) return 1;
        int result = 0;
        if(dp[n]) return dp[n];
        for(int i = 1; i <= n; i++) 
            result += numTrees(i-1) * numTrees(n-i);
        return dp[n] = result;  
    }
};
class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size(), m = text2.size();
        vector<vector<int>>dp(n + 1, vector<int>(m + 1, -1));
       return solve(0, 0, text1, text2, dp); 
    }
    int solve(int i, int j, string &one , string &two, vector<vector<int>>&dp){
        if(i >= one.size() or j >= two.size()) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        int nonTake = max(solve(i+1, j, one, two, dp), solve(i, j+1, one, two, dp));
        int take = INT_MIN;
        if(one[i] == two[j]) take = 1 + solve(i+1, j+1, one, two, dp);

        return dp[i][j] = max(take, nonTake);
    }
};
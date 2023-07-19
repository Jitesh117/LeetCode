class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size(), m = text2.size();
        vector<vector<int>>dp(n + 1, vector<int>(m + 1, -1));
        for(int i = 0; i <= n; i++) dp[i][0] = 0;
        for(int j = 0; j <= m; j++) dp[0][j] = 0;

        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                int nonTake = max(dp[i - 1][j], dp[i][j - 1]);
                int take = INT_MIN;
                if(text1[i - 1] == text2[j - 1])
                    take = 1 + dp[i-1][j-1];
                dp[i][j] = max(take, nonTake);
            }
        }

        return dp[n][m];
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
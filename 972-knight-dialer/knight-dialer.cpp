class Solution {
public:
const int mod = 1e9 + 7;


    int knightDialer(int n) {
        vector<vector<vector<long>>> dp(n + 1, vector<vector<long>>(4, vector<long>(3, 0)));
        long result = 0;
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 3; j++) {
                result = (result + solve(dp, i, j, n)) % mod;
            }
        }
        return (int)(result);
    }
    long solve(vector<vector<vector<long>>>& dp, int i, int j, int n) {
        if (i < 0 or j < 0 or i >= 4 or j >= 3 or (i == 3 and j != 1)) return 0;
        if (n == 1) return 1;
        if (dp[n][i][j] > 0) return dp[n][i][j];
        dp[n][i][j] = (solve(dp, i - 1, j - 2, n - 1) % mod +
                    solve(dp, i - 2, j - 1, n - 1) % mod +
                    solve(dp, i - 2, j + 1, n - 1) % mod +
                    solve(dp, i - 1, j + 2, n - 1) % mod +
                    solve(dp, i + 1, j + 2, n - 1) % mod +
                    solve(dp, i + 2, j + 1, n - 1) % mod +
                    solve(dp, i + 2, j - 1, n - 1) % mod +
                    solve(dp, i + 1, j - 2, n - 1) % mod) % mod;
                    
        return dp[n][i][j];
    }
};
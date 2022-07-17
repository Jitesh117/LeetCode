class Solution
{
public:
    int minFallingPathSum(vector<vector<int>> &matrix)
    {

        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> dp(n, vector<int>(m, 0));
        for (int j = 0; j < m; j++)
        {
            dp[0][j] = matrix[0][j];
        }

        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int left = INT_MAX, right = INT_MAX;
                int up = matrix[i][j] + dp[i - 1][j];
                if (j - 1 >= 0)
                    left = matrix[i][j] + dp[i - 1][j - 1];
                if (j + 1 < m)
                    right = matrix[i][j] + dp[i - 1][j + 1];
                dp[i][j] = min(up, min(left, right));
            }
        }

        int mini = dp[n - 1][0];

        for (int j = 1; j < m; j++)
        {

            mini = min(mini, dp[n - 1][j]);
        }
        return mini;
    }
};
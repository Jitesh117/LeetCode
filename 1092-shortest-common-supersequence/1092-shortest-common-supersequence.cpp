class Solution {
public:
    string shortestCommonSupersequence(string str1, string str2) {
        int n = str1.size();
        int m = str2.size();
        int dp[n + 1][m + 1]; 
        for (int i = 0; i <= n; i++)
            for (int j = 0; j <= m; j++)
                if (i == 0 or j == 0)
                    dp[i][j] = 0;

        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
            {
                if (str1[i - 1] == str2[j - 1]) 
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                else 
                    dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
            }
        int i = n, j = m;
        string result = "";
        while (i > 0 && j > 0) {
            if (str1[i - 1] == str2[j - 1]) {  
                result += str1[i - 1]; 
                i--, j--; 
            }
            else if (dp[i][j - 1] > dp[i - 1][j]) {
                result += str2[j - 1]; 
                j--;
            }
            else {
                result += str1[i - 1]; 
                i--;
            }
        }
        while (i > 0) {
            result += str1[i - 1];
            i--;
        }
        while (j > 0) {
            result += str2[j - 1]; 
            j--;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
class Solution {
public:
    bool isMatch(string text, string pattern) {
        int n = pattern.size();
        int m = text.size();
        vector<vector<bool>>dp(n+1,vector<bool>(m+1,false));
        dp[0][0] = true;
        for(int j = 1;j<=m;j++)
            dp[0][j] = false;
        
        for(int i = 1;i<=n;i++){
            bool flag = true;
            for(int ii = 1;ii<=i;ii++)
            {
                if(pattern[ii-1] != '*'){
                    flag = false;
                    break;
                }
            }
            dp[i][0] = flag;
        }
        for(int i = 1;i<=n;i++)
            for(int j =1;j<=m;j++)
            {
                if(pattern[i-1] == text[j-1] or pattern[i-1] == '?')
                    dp[i][j] = dp[i-1][j-1];
                else if(pattern[i-1] == '*')
                    dp[i][j] = dp[i-1][j] or dp[i][j-1];
                else
                    dp[i][j] = false;
            }
        return dp[n][m];
    }
};
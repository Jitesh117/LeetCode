class Solution {
public:
    int longestPalindromeSubseq(string s) {
        string t1 = s;
        reverse(t1.begin(),t1.end());
        int n = s.size();
        int t[n+1][n+1];
        for(int i = 0;i<=n;i++)
            for(int j = 0;j<=n;j++)
            {
                if( i == 0 || j == 0)
                    t[i][j] = 0;
            }
        for(int i = 1;i<=n;i++)
            for(int j = 1;j<=n;j++)
            {
                if(s[i-1] == t1[j-1])
                {
                    t[i][j] = 1+t[i-1][j-1];
                }
                else
                    t[i][j] = max(t[i-1][j],t[i][j-1]);
            }
        return t[n][n];
    }
};
class Solution {
public:
    int minInsertions(string s) {
        return s.size() - LPS(s);
    }
    string reverseStr(string& str)
{
    int n = str.length();
 
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
    return str;
}
    int LPS(string x) {
     return LCS(x,reverseStr(x));
    }
     int LCS(string text1, string text2) {
        int n = text1.size(),m = text2.size();
        int t[n+1][m+1];
        
        for(int i = 0;i<=n;i++)
            for(int j = 0;j<=m;j++)
                if(i == 0 || j == 0)
                    t[i][j] = 0;
        
        for(int i = 1;i<=n;i++)
            for(int j = 1;j<=m;j++)
            {
                if(text1[i-1] == text2[j-1])
                    t[i][j] = 1+t[i-1][j-1];
                else
                    t[i][j] = max(t[i-1][j],t[i][j-1]);
            }
        return t[n][m];
    }
};
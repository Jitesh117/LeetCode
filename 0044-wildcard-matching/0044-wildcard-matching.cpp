class Solution {
public:
    bool isMatch(string text, string pattern) {
        int n = pattern.size();
        int m = text.size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return solve(n-1,m-1,pattern,text,dp);
    }
    int solve(int i, int j, string &pattern, string &text,vector<vector<int>>&dp){
        if(i<0 and j<0) return true;
        if(i<0 and j>=0) return false;
        
        if(j<0 and i>=0){
            for(int ii = 0;ii<=i;ii++)
                if(pattern[ii] != '*') return false;
            return true;
        }
        if(dp[i][j] != -1) return dp[i][j];
        
        if(pattern[i] == text[j] or pattern[i] == '?')
            return dp[i][j] = solve(i-1,j-1,pattern,text,dp);
        if(pattern[i] == '*'){
            return dp[i][j] = solve(i-1,j,pattern,text,dp) or solve(i,j-1,pattern,text,dp);
        }
        return dp[i][j] = false;
    }
};
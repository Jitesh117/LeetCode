class Solution {
public:
    int minDistance(string s, string t) {
        int n = s.size();
        int m = t.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        for(int i = 0;i<=n;i++) dp[i][0] = i;
        for(int j = 0;j<=m;j++) dp[0][j] = j;
        
        for(int i = 1;i<=n;i++)
            for(int j = 1;j<=m;j++){
                if(s[i-1] == t[j-1]) dp[i][j] = dp[i-1][j-1];
                else
                    dp[i][j] = 1 + min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]));
            }
        return dp[n][m];
        
    }
//     int solve(int i, int j, string &s, string &t, vector<vector<int>>&dp){
//         if(i == 0) return i;
//         if(j == 0) return j;
       
//         if(dp[i][j] != -1) return dp[i][j];
//         if(s[i-1] == t[i-1]) return dp[i][j] = solve(i-1,j-1,s,t,dp);
        
//         return dp[i][j] = 1 + min(solve(i-1,j,s,t,dp),min(solve(i,j-1,s,t,dp),solve(i-1,j-1,s,t,dp)));
//     }
};
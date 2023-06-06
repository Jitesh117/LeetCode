class Solution {
public:
    int numDecodings(string s) {
        int n = s.size();
        vector<int>dp(n,-1);
        return s.empty() ? 0: solve(0,s, dp);    
    }
    int solve(int i, string& s, vector<int>&dp) {
        int n = s.size();
        if(i == n) return 1;
        if(dp[i] != -1) return dp[i];
        if(s[i] == '0') return 0; 
        int nonTake = solve(i+1,s, dp);
        int take = 0;
        if( i < n-1 and (s[i]=='1' or (s[i]=='2' and s[i+1]<'7'))) 
            take = solve(i + 2, s, dp);
        return dp[i] = take + nonTake;
    }
};
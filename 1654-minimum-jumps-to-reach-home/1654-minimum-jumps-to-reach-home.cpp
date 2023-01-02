class Solution {
public:
    unordered_map<int,int>forbid;
    int minimumJumps(vector<int>& forbidden, int a, int b, int x) {
        vector<vector<int>>dp(7001,vector<int>(2,-1));
        for(auto &i:forbidden)
            forbid[i] = 1;
        int result = solve(0,0,a,b,x,dp);
        if(result >= 1e9) return -1;
        return result;
    }
    int solve(int i, bool back,int &a, int &b, int &x,vector<vector<int>>&dp){
        if(i == x) return 0;
        if(i<0 or forbid[i] or i>6000) return 1e9;
        if(dp[i][back] != -1) return dp[i][back];
        
        dp[i][back] = 1 + solve(i+a,0,a,b,x,dp);
        if(!back)
            dp[i][back] = min(dp[i][back],1 + solve(i-b,1,a,b,x,dp));
        return dp[i][back];
    }
};
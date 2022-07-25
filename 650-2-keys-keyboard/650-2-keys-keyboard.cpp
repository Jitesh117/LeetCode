class Solution {
public:
    int minSteps(int n) {
        if( n == 1) return 0;
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return solve(1,1,1,n,dp);
    }
    int solve(int step, int value , int copy , int &n,vector<vector<int>>&dp)
    {
        if(step>n or value>n) return INT_MAX;
        if(value == n) return step;
        if(dp[step][value]!=-1) return dp[step][value];
        int paste = solve(step+1,value+copy,copy,n,dp);
        int copyPaste = solve(step+2,value*2,value,n,dp);
        
        return dp[step][value] =  min(paste,copyPaste);
    }
};
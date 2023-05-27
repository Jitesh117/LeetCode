class Solution {
public:
    int maxCoins(vector<int>& v) {
        v.push_back(1);
        v.insert(v.begin(),1);
        int n = v.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return solve(1, n-2, v,dp);
    }

    int solve(int i, int j, vector<int>&v, vector<vector<int>>&dp){
        if(i > j) return 0;
        int result = INT_MIN;
        if(dp[i][j] != -1) return dp[i][j];
        for(int k = i; k <= j; k++){
            int cost = v[i-1] * v[k] *  v[j+1] + solve(i,k-1,v, dp) + solve(k+1, j, v, dp);
            result = max(result, cost);
        }
        return dp[i][j] = result;
    }
};
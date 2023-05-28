class Solution {
public:
    int minCost(int n, vector<int>& cuts) {
        int c = cuts.size();
        cuts.push_back(0);
        cuts.push_back(n);
        sort(cuts.begin(), cuts.end());

        vector<vector<int>>dp(c+1, vector<int>(c+1,-1));

        return solve(1, cuts.size() - 2, cuts, dp);
    }

    int solve(int i, int j, vector<int>&cuts, vector<vector<int>>&dp){
        if(i > j) return 0;

        if(dp[i][j] != -1) return dp[i][j];
        int result = INT_MAX;

        for(int ind = i; ind <= j; ind++){
            int cost = cuts[j+1] - cuts[i-1] + solve(i, ind - 1, cuts, dp) + solve( ind + 1, j, cuts, dp);
            result = min(result, cost);
        }
        return dp[i][j] = result;
    }
};
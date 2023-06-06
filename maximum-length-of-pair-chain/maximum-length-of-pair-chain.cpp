class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
       sort(pairs.begin(), pairs.end());
       int n = pairs.size();
       vector<vector<int>>dp(n, vector<int>(n+1, -1));
        return solve(0, -1, pairs, dp);
    }
    int solve(int i, int prev, vector<vector<int>>& pairs, vector<vector<int>>&dp){
        if(i == pairs.size()) return 0;

        if(dp[i][prev + 1] != -1) return dp[i][prev + 1];
        int nonTake,take = INT_MIN;
        nonTake = solve(i+1, prev, pairs, dp);

        if(prev == -1 or pairs[i][0] > pairs[prev][1])
            take = 1 + solve(i+1, i, pairs, dp);

        return dp[i][prev + 1] = max(take, nonTake);
    }
};
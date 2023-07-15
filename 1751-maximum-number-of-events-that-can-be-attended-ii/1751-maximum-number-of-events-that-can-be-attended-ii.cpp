class Solution {
public:
    int maxValue(vector<vector<int>>& events, int k) {
        
        sort(events.begin(), events.end());
        vector<vector<int>>dp(events.size() + 1, vector<int>(k + 1,-1));
        return solve(0, events, k, dp);
    }
    int solve(int cur, vector<vector<int>>&events, int k, vector<vector<int>>&dp){
        if(cur >= events.size() or k == 0) return 0;
        
        if(dp[cur][k] != -1) return dp[cur][k];
        
        int i = 0;
        for(i = cur + 1; i < events.size(); i++){
            if(events[i][0] > events[cur][1]) break;
        }
        
        int take = events[cur][2] + solve(i, events, k - 1, dp);
        int nonTake = solve(cur + 1, events, k, dp);
        
        return dp[cur][k] = max(take, nonTake);
    }
};
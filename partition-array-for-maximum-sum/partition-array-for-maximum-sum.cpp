class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        vector<int>dp(arr.size()+1, -1);
       return solve(0, k, arr, dp); 
    }

    int solve(int ind, int k, vector<int>&arr, vector<int>&dp){
        int n = arr.size();
        if(ind == n) return 0;

        if(dp[ind] != -1) return dp[ind];

        int len = 0;
        int maxi = INT_MIN;
        int result = INT_MIN;

        for(int j = ind; j < min(n, ind + k); j++){
            len++;
            maxi = max(maxi, arr[j]);
            int sum = len * maxi + solve(j+1, k, arr, dp);
            result = max(result, sum);
        }
        return dp[ind] = result;
    }
};
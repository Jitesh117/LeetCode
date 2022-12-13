class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int dp[n][n];
        for(int i = 0;i<n;i++)
            dp[n-1][i] = matrix[n-1][i];
        for(int i = n-2;i>=0;i--){
            for(int j = 0;j<n;j++){
                int down = INT_MAX,left = INT_MAX, right = INT_MAX;
                down = dp[i+1][j];
                if(j-1>=0)
                    left = dp[i+1][j-1];
                if(j+1<n)
                    right = dp[i+1][j+1];
                dp[i][j] = min(down,min(left,right)) + matrix[i][j];
            }
            
        }
        int result = INT_MAX;
        for(int i = 0;i<n;i++)
            result = min(result,dp[0][i]);
        return result;
    }
};
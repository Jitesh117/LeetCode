class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& v) {
        int n = v.size();
        int result = INT_MAX;
        int dp[n][n];
        for(int j = 0;j<n;j++)
            dp[n-1][j] = v[n-1][j];
        
        for(int i = n-2;i>=0;i--)
        {
            for(int j = 0;j<n;j++)
            {
                int down=INT_MAX,left=INT_MAX,right=INT_MAX;
                
                down = dp[i+1][j];
                if(j-1>=0)
                    left = dp[i+1][j-1];
                if(j+1<n)
                    right = dp[i+1][j+1];
                dp[i][j] = min(down,min(left,right))+v[i][j];
            }
        }
        for(int j = 0;j<n;j++)
            result = min(dp[0][j],result);
        
        return result;
    }

};
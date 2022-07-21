class Solution {
public:
    int n;
    int cherryPickup(vector<vector<int>>& grid) {
        n = grid.size();
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(n,vector<int>(n,-1)));
        int result = solve(0,0,0,0,grid,dp);
        if(result>0)
            return result;
        return 0;
    }
    int solve(int i,int j, int r, int c, vector<vector<int>>&grid,vector<vector<vector<int>>>&dp)
    {
        if(i>=n or r>=n or j>=n or c>=n or grid[i][j] == -1 or grid[r][c] == -1)
            return -1e8;
        if(i == n-1 and j == n-1)
            return grid[i][j];
        if(dp[i][j][c]!=-1)
            return dp[i][j][c];
        
        int value = grid[i][j];
        if(j!=c)
            value+=grid[r][c];
        
        int dr = solve(i+1,j,r,c+1,grid,dp);
        int dd = solve(i+1,j,r+1,c,grid,dp);
        int rd = solve(i,j+1,r+1,c,grid,dp);
        int rr = solve(i,j+1,r,c+1,grid,dp);
            
        return dp[i][j][c] = max(dd,max(dr,max(rd,rr)))+value;
        
    }
};
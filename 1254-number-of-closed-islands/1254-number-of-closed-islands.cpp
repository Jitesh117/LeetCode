class Solution {
public:
    int closedIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int result = 0; 
        for(int i = 0;i<n;i++)
            for(int j = 0;j<m;j++)
               if(i == 0 or j == 0 or i == n-1 or j == m-1) dfs(i,j,grid); 
        for(int i = 0;i<n;i++)
            for(int j = 0;j<m;j++)
                if(grid[i][j] == 0)
                {
                    result++;
                    dfs(i,j,grid);
                }
        return result;
    }
    void dfs(int i, int j, vector<vector<int>>&grid){
        int n = grid.size();
        int m = grid[0].size();
        if(i <0 or j<0 or i>=n or j>=m or grid[i][j]) return;
        grid[i][j] = 1;
        dfs(i+1,j,grid);
        dfs(i-1,j,grid);
        dfs(i,j+1,grid);
        dfs(i,j-1,grid);
    }
};
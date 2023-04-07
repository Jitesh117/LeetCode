class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        for(int i = 0; i<n; i++){
            if(grid[i][0]) dfs(i, 0, grid);
            if(grid[i][m-1])dfs(i, m - 1, grid);
        }
        for(int i = 0; i < m; i++){
            if(grid[0][i]) dfs(0, i, grid);
            if(grid[n-1][i]) dfs(n-1, i, grid);
        }
        int result = 0; 
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j]) result++;
            }
        }
        return result;
    }
     
    void dfs(int i, int j, vector<vector<int>>&grid){
        if(i < 0 or j < 0 or i >= grid.size() or j >= grid[0].size()) return;
        if(!grid[i][j]) return;
        
        grid[i][j] = 0;
        
        dfs(i-1, j, grid);
        dfs(i+1, j, grid);
        dfs(i, j-1, grid);
        dfs(i, j+1, grid);
    }
};
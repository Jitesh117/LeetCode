class Solution {
public:
    int closedIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++)
                if(i == 0 or i == n - 1 or j == 0 or j == m - 1) dfs(i, j, grid);
        }
        int result = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(!grid[i][j]){
                    result++;
                    dfs(i, j, grid);
                }
            }
        }
        return result;
    }

    void dfs(int i, int j, vector<vector<int>>&grid){
        if(i < 0 or j < 0 or i >= grid.size() or j >= grid[0].size() or grid[i][j]) return;

        grid[i][j] = 1;

        dfs(i + 1, j, grid);
        dfs(i - 1, j, grid);
        dfs(i, j + 1, grid);
        dfs(i, j - 1, grid);
    }
};
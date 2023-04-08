class Solution {
public:
    int countBattleships(vector<vector<char>>& grid) {
        int result = 0;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j< grid[0].size(); j++){
                if(grid[i][j] == 'X'){
                   result++;
                    dfs(i,j,grid);
                }
            }
        }
        return result;
        
    }
    void dfs(int i, int j, vector<vector<char>>&grid){
       if(i < 0 or j < 0 or i >= grid.size() or j >= grid[0].size()) return;
       if(grid[i][j] != 'X') return;
       grid[i][j] = '.';
        
        dfs(i + 1, j, grid);
        dfs(i - 1, j, grid);
        dfs(i, j + 1, grid);
        dfs(i, j - 1, grid);
    }
};
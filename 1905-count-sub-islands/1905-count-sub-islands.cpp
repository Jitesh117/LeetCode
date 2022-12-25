class Solution {
public:
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int m = grid2.size(), n = grid2[0].size(), result = 0;
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                if (grid2[i][j] == 1)
                    result += dfs(grid1, grid2, i, j);
        return result;
    }


    int dfs(vector<vector<int>>& grid1, vector<vector<int>>& grid2, int i, int j) {
        int m = grid2.size(), n = grid2[0].size(), result = 1;
        if (i < 0 or i == m or j < 0 or j == n or grid2[i][j] == 0) return 1;
        grid2[i][j] = 0;
        result &= dfs(grid1, grid2, i - 1, j);
        result &= dfs(grid1, grid2, i + 1, j);
        result &= dfs(grid1, grid2, i, j - 1);
        result &= dfs(grid1, grid2, i, j + 1);
        return result & grid1[i][j];
    }
};
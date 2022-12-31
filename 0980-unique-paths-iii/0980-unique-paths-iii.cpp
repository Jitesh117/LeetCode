class Solution {
public:
    int dfs(vector<vector<int>> &grid, int i, int j, int stepsTaken, int requiredSteps){
        if (i < 0 or j < 0 or i >= grid.size() or j >= grid[0].size() or grid[i][j] == -1)
            return 0;
        if (grid[i][j] == 2)
            return stepsTaken == requiredSteps;
        grid[i][j] = -1;
        int paths = dfs(grid, i + 1, j, stepsTaken + 1, requiredSteps) + dfs(grid, i - 1, j, stepsTaken + 1, requiredSteps) +
                    dfs(grid, i, j + 1, stepsTaken + 1, requiredSteps) + dfs(grid, i, j - 1, stepsTaken + 1, requiredSteps);
        grid[i][j] = 0;
        return paths;
}
int uniquePathsIII(vector<vector<int>> &grid){
    int starti = 0, startj = 0, requiredSteps = 0;
    for (auto i = 0; i < grid.size(); ++i)
        for (auto j = 0; j < grid[0].size(); ++j)
        {
            if (grid[i][j] == 1)
                starti = i, startj = j;
            if (grid[i][j] != -1)
                ++requiredSteps;
        }
    return dfs(grid, starti, startj, 1, requiredSteps);
}
};
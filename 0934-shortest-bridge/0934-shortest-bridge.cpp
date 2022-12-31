class Solution
{
public:
    int dir[5] = {0, 1, 0, -1, 0};
    int shortestBridge(vector<vector<int>> &grid)
    {
        vector<pair<int, int>> q;
        for (int i = 0; q.size() == 0 && i < grid.size(); ++i)
            for (int j = 0; q.size() == 0 && j < grid[0].size(); ++j)
                paint(grid, i, j, q);
        while (!q.empty())
        {
            vector<pair<int, int>> q1;
            for (auto [i, j] : q)
            {
                for (int d = 0; d < 4; ++d)
                {
                    int x = i + dir[d], y = j + dir[d + 1];
                    if (min(x, y) >= 0 && max(x, y) < grid.size())
                    {
                        if (grid[x][y] == 1)
                            return grid[i][j] - 2;
                        if (grid[x][y] == 0)
                        {
                            grid[x][y] = grid[i][j] + 1;
                            q1.push_back({x, y});
                        }
                    }
                }
            }
            swap(q, q1);
        }
        return 0;
    }
    void paint(vector<vector<int>> &grid, int i, int j, vector<pair<int, int>> &q)
    {
        if (min(i, j) >= 0 && max(i, j) < grid.size() && grid[i][j] == 1)
        {
            grid[i][j] = 2;
            q.push_back({i, j});
            for (int d = 0; d < 4; ++d)
                paint(grid, i + dir[d], j + dir[d + 1], q);
        }
    }
};
class Solution
{
public:
    int maxAreaOfIsland(vector<vector<int>> &grid)
    {
        int result = 0;
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
            {
                if (!vis[i][j] and grid[i][j] == 1)
                {
                    result = max(result, bfs(i, j, grid, vis));
                }
            }
        return result;
    }
    int bfs(int i, int j, vector<vector<int>> &grid, vector<vector<int>> &vis)
    {
        int n = grid.size();
        int m = grid[0].size();

        vis[i][j] = 1;
        queue<pair<int, int>> q;
        q.push({i, j});
        int result = 1;
        while (q.size())
        {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            for (int delrow = -1; delrow <= 1; delrow++)
                for (int delcol = -1; delcol <= 1; delcol++)
                {
                    int nrow = row + delrow;
                    int ncol = col + delcol;
                    if ((delrow == -1 and delcol == -1) or (delrow == -1 and delcol == 1) or (delrow == 1 and delcol == -1) or (delrow == 1 and delcol == 1))
                        continue;

                    if (nrow >= 0 and nrow < n and ncol >= 0 and ncol < m and grid[nrow][ncol] == 1 and !vis[nrow][ncol])
                    {
                        result++;
                        vis[nrow][ncol] = 1;
                        q.push({nrow, ncol});
                    }
                }
        }
        return result;
    }
};
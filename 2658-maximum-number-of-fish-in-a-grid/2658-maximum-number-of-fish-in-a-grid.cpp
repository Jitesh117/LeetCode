class Solution {
public:
    int findMaxFish(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        int maxFish = 0;
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] > 0 and !visited[i][j]) {
                    int curFish = bfs(grid, visited, i, j);
                    maxFish = max(maxFish, curFish);
                }
            }
        }
        return maxFish;
    }
    int bfs(vector<vector<int>>& grid, vector<vector<bool>>& visited, int i, int j) {
        int m = grid.size(), n = grid[0].size();
        int curFish = 0;
        queue<pair<int, int>> q;
        q.push({i,j});
        visited[i][j] = true;
        while (!q.empty()) {
            int r = q.front().first, c = q.front().second;
            q.pop();
            if (grid[r][c] > 0) { 
                curFish += grid[r][c];
            }
            if (r+1 < m and !visited[r+1][c] and grid[r+1][c] > 0) {
                q.push({r+1,c});
                visited[r+1][c] = true;
            }
            if (r-1 >= 0 and !visited[r-1][c] and grid[r-1][c] > 0) {
                q.push({r-1,c});
                visited[r-1][c] = true;
            }
            if (c+1 < n and !visited[r][c+1] and grid[r][c+1] > 0) {
                q.push({r,c+1});
                visited[r][c+1] = true;
            }
            if (c-1 >= 0 and !visited[r][c-1] and grid[r][c-1] > 0) {
                q.push({r,c-1});
                visited[r][c-1] = true;
            }
        }
        return curFish;
    }
};
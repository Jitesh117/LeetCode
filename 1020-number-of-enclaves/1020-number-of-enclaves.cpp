class Solution {
public:
    int n,m;
    int numEnclaves(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();
        int result = 0;
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i = 0;i<n;i++)
            if(!vis[i][0] and grid[i][0])
                bfs(i,0,grid,vis);
        for(int i = 0;i<n;i++)
            if(!vis[i][m-1] and grid[i][m-1])
                bfs(i,m-1,grid,vis);
        for(int j = 0;j<m;j++)
            if(!vis[0][j] and grid[0][j])
                bfs(0,j,grid,vis);
        for(int j = 0;j<m;j++)
            if(!vis[n-1][j] and grid[n-1][j])
                bfs(n-1,j,grid,vis);
        for(int i = 0;i<n;i++)
            for(int j = 0;j<m;j++)
                if(grid[i][j] == 1) 
                    result++;
                
        return result;
    }
    void bfs(int i, int j, vector<vector<int>>&grid,vector<vector<int>>&vis){
        int n = grid.size();
        int m = grid[0].size();
        
        vis[i][j] = 1;
        queue<pair<int,int>>q;
        q.push({i,j});
        while(q.size()){
            int row = q.front().first;
            int col = q.front().second;
            grid[row][col] = 0;
            q.pop();
            for (int delrow = -1; delrow <= 1; delrow++)
                for (int delcol = -1; delcol <= 1; delcol++)
                {
                    int nrow = row + delrow;
                    int ncol = col + delcol;
                    if((delrow==-1 and delcol==-1) or (delrow==-1 and delcol==1) or (delrow==1 and delcol==-1) or (delrow==1 and delcol==1)) continue;
                    
                    if (nrow >= 0 and nrow < n and ncol >= 0 and ncol < m and grid[nrow][ncol] == 1 and !vis[nrow][ncol])
                    {
                        vis[nrow][ncol] = 1;
                        q.push({nrow, ncol});
                    }
                }
        }
    }
};
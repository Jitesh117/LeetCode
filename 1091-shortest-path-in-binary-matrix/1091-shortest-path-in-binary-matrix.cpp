class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid)
    {
        
        int n = grid.size();
        vector<vector<bool>> visited(n, vector<bool> (n, false));
        queue<pair<int, int>> q;
        int result = 0;
        int npush;
        
        if(grid[0][0] == 0)
        {
            q.push({0, 0});
            visited[0][0] = true;
        }
                
        while(!q.empty())
        {
            
            npush = q.size();
            result++;
            
            for(int cnt = 0; cnt < npush; cnt++)
            {
                
                pair<int, int> node = q.front();
                q.pop();
            
                int i = node.first, j = node.second;

                if(i==n-1 and j==n-1) 
                    return result;

                for(int k = i - 1; k <= i + 1 ; k++){
                    for(int l = j - 1; l <= j + 1; l++)
                    {
                        if(isValid(grid, k, l, n, visited))
                        {
                            q.push({k, l});
                            visited[k][l] = true;
                        }
                    }
                }                
                
            }            
            
        }
        
        return -1;
        
    }
    
    bool isValid(vector<vector<int>>& grid, int i, int j, int n, vector<vector<bool>>& visited){
        
        return (i>=0 and i<n and j>=0 and j<n and grid[i][j]==0 and !visited[i][j]);
        
    }
};
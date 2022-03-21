class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        vector<int> dir={-1,0,1,0,-1};
        int fresh = 0;
        int ans = -1;
        for(int i = 0;i<grid.size();i++)
            for(int j = 0;j<grid[0].size();j++)
            {
                if(grid[i][j]==2)
                    q.push({i,j});
                if(grid[i][j]==1)
                    fresh++;
            }
       while(!q.empty())
        {
            int sz=q.size();
            while(sz--)
            {
                pair<int,int> p=q.front();
                q.pop();
                for(int i=0;i<4;i++)
                {
                    int r=p.first+dir[i];
                    int c=p.second+dir[i+1];
                    if(r>=0 && r<grid.size()&& c>=0 && c<grid[0].size() &&grid[r][c]==1)
                    {
                        grid[r][c]=2;
                        q.push({r,c});
                        fresh--; 
                    }
                    
                }
            }
            ans++; 
        }
        if(fresh>0)
            return -1;
        if(ans ==-1)
            return 0;
        
        return ans;
        
    }
};
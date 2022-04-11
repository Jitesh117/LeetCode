class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<int> temp(grid.size()*grid[0].size());
        int t = 0;
        for(int i = 0;i<grid.size();i++)
            for(int j = 0;j<grid[0].size();j++)
            {
                temp[t]=grid[i][j];
                t++;
            }
        t=0;
        k = k%(temp.size());
        reverse(temp,0,temp.size()-1);
        reverse(temp,k,temp.size()-1);
        reverse(temp,0,k-1);
        
        for(int i = 0;i<grid.size();i++)
            for(int j = 0;j<grid[0].size();j++)
            {
                grid[i][j] = temp[t];
                t++;
            }
        
        return grid;
    }
     void reverse(vector<int>& v,int start, int end)
    {
        while(start<end)
        {
            int temp = v[start];
            v[start] = v[end];
            v[end] = temp;
            end--;
            start++;
        }
    }
};
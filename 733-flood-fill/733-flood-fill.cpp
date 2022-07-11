class Solution {
public:
    int m,n;
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        m = image.size();
        n = image[0].size();
        solve(image,sr,sc,color,image[sr][sc]);
        return image;
    }
    void solve(vector<vector<int>>& image,int i, int j, int color, int curcolor)
    {
        if(i<0 or j<0 or i>=m or j>=n)
            return;
        if(image[i][j]!=curcolor)
            return;
        if(image[i][j]==color)
            return;
        image[i][j] = color;
        
        solve(image,i-1,j,color,curcolor);
        solve(image,i+1,j,color,curcolor);
        solve(image,i,j+1,color,curcolor);
        solve(image,i,j-1,color,curcolor);
    }
};
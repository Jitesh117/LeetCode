class Solution {
public:
    int m, n;
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newcolor) {
        m = image.size();
        n = image[0].size();
        flood(image,sr,sc,image[sr][sc],newcolor);
        
        return image;
    }
    void flood(vector<vector<int>>& image,int i,int j, int currcolor, int newcolor)
    {
        if(i<0 || j<0 || i>=m || j>=n)
            return;
        if(image[i][j]!=currcolor)
            return;
        if(image[i][j]==newcolor)
            return;
        image[i][j]=newcolor;
        flood(image,i+1,j,currcolor,newcolor);
        flood(image,i-1,j,currcolor,newcolor);
        flood(image,i,j-1,currcolor,newcolor);
        flood(image,i,j+1,currcolor,newcolor);
    }
};
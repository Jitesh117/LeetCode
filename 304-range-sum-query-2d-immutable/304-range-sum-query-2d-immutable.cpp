class NumMatrix {
public:
    vector<vector<int>> res;
    NumMatrix(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        res = vector<vector<int>>(n + 1, vector<int>(m + 1));
        for(int i = 1;i<=n;i++)
            for(int j = 1;j<=m;j++)
            {
                res[i][j] = res[i-1][j]+res[i][j-1]-res[i-1][j-1]+matrix[i-1][j-1];
            }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        row1++,row2++,col1++,col2++;
        return res[row2][col2] - res[row2][col1-1] - res[row1-1][col2]+res[row1-1][col1-1];
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int topRow = 0, bottomRow = n-1;
        int topCol = 0, bottomCol = n-1;
        int count = 0;
        vector<vector<int>> ans(n, vector<int>(n));

        while(topRow <= bottomRow && topCol <= bottomCol) {
            for(int j=topCol; j<=bottomCol; ++j) {
                ++count;
                ans[topRow][j] = count; 
            }
            for(int i=topRow+1; i<=bottomRow; ++i) {
                ++count;
                ans[i][bottomCol] = count;
            }
            for(int j=bottomCol-1; j>=topCol; --j) {
                ++count;
                ans[bottomRow][j] = count;
            }
            for(int i=bottomRow-1; i>topRow; --i) {
                ++count;
                ans[i][topCol] = count;
            }
            ++topRow, ++topCol;
            --bottomRow, --bottomCol;
        }
        return ans;
    }
};
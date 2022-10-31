class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(i>0 and j>0 and matrix[i][j] != matrix[i-1][j-1])
                    return false;
            }
        }
        return true;
    }
};
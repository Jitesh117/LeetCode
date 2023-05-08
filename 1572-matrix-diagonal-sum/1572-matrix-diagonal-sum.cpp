class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int result = 0;
        for(int i = 0;i<mat.size();i++)
            for(int j = 0;j<mat[0].size();j++)
            {
                if(i == j)
                    result+=mat[i][j];
                else if(i+j == mat.size()-1)
                    result+=mat[i][j];
            }
        return result;
    }
};
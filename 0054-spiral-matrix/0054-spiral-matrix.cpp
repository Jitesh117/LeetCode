class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int left = 0;
        int right = matrix[0].size()-1;
        int top = 0;
        int bottom = matrix.size()-1;
        
        vector<int> result;
        int i;
        while(left <= right and top <= bottom) {
         
            for(i = left; i <= right; i++) {
                result.push_back(matrix[top][i]);
            }
            top++;
           
            for(i = top; i <= bottom; i++) {
                result.push_back(matrix[i][right]);
            }
            right--;
            
            if(left > right or top > bottom) break;
            
            for(i = right; i >= left; i--) {
                result.push_back(matrix[bottom][i]);
            }
            bottom--;
            
            for(i=bottom; i >= top; i--) {
                result.push_back(matrix[i][left]);
            }
            left++;
        }
        
        return result;
    }
};
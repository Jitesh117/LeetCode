class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int left = 0;
        int right = n - 1;
        int top = 0;
        int bottom = n - 1;
        
        vector<vector<int>>result(n,vector<int>(n));
        int i;
        int cur = 1;
        while(left <= right and top <= bottom) {
         
            for(i = left; i <= right; i++) {
                result[top][i] = cur++;
                
            }
            top++;
           
            for(i = top; i <= bottom; i++) {
                result[i][right] = cur++;
            }
            right--;
            
            if(left > right or top > bottom) break;
            
            for(i = right; i >= left; i--) {
                result[bottom][i] = cur++;
            }
            bottom--;
            
            for(i=bottom; i >= top; i--) {
                result[i][left] = cur++;
            }
            left++;
        }
        
        return result;   
    }
};
class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
       int m = matrix.size(), n = matrix[0].size();
       int result = 0;
       vector<int> height(n, 0);
       for(int i = 0; i < m; i++){
           for(int j = 0; j < n; j++){
               if(matrix[i][j] == 0) height[j] = 0;
               else height[j]++;
           }
           vector<int>sorted_height = height;
           sort(sorted_height.begin(), sorted_height.end());

           for(int j = 0; j < n; j++){
               result = max(result, sorted_height[j] * (n - j));
           }
       } 
       return result;
    }
};
class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
       int n = matrix.size();
       priority_queue<int>mheap;
        for(int i = 0;i<n;i++)
            for(int j= 0 ;j<n;j++)
            {
              mheap.push(matrix[i][j]);
                if(mheap.size()>k) mheap.pop();
            }
        return mheap.top();
    }
};
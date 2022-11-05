class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        unordered_map<int,vector<int>> umap;
        int n = mat.size();
        int m = mat[0].size();
        for(int i = 0;i<n;i++)
            for(int j = 0;j<m;j++)
                umap[i-j].push_back(mat[i][j]);
        for(auto it:umap)
            sort(it.second.begin(),it.second.end());
        for(int i = -(m-1);i<n;i++)
            sort(umap[i].rbegin(),umap[i].rend());
        vector<vector<int>>result = mat;
        for(int i = 0;i<n;i++)
            for(int j = 0;j<m;j++)
            {
                result[i][j] = umap[i-j].back();
                umap[i-j].pop_back();
            }
        return result;
        
    }
};
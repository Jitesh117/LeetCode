class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges){
        unordered_map<int,int>umap;
        for(int i = 0;i<edges.size();i++)
            umap[edges[i][1]]++;
        vector<int>result;
        for(int i= 0;i<n;i++)
            if(umap[i] == 0) result.push_back(i);
        return result;
    }
};
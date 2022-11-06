class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int,int>umap;
        for(auto it:edges){
            umap[it[0]]++;
            umap[it[1]]++;
        }
        int result = 0;
        int count = 0;
        for(auto it:umap)
        {
            if(it.second>count){
                result = it.first;
                count = it.second; 
            }
        } 
        return result;
    }
};
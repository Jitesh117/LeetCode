class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>>result;
        unordered_map<int,int>umap;
        for(auto i:nums)umap[i]++;
        int maxl = 0;
        int maxtime = 0;
        for(auto i:umap){
            if(i.second>maxtime){
                maxl = i.first;
                maxtime = i.second;
            }
        }
        while(umap[maxl]>0){
            vector<int>temp;
            for(auto i:umap){
                if(i.second){
                    temp.push_back(i.first);
                    umap[i.first]--;
                }
            }
            result.push_back(temp);
        }
        return result;
    }
};
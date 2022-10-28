class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>umap;
        for(auto s:strs){
           string t = s;
            sort(t.begin(),t.end());
            umap[t].push_back(s);
        }
        vector<vector<string>> result;
        for(auto it:umap){
            result.push_back(it.second);
        }
        return result;
    }
};
class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& gsize) {
       int n = gsize.size();
       unordered_map<int, vector<int>>map;
       vector<vector<int>> result; 
       for(int i = 0; i < n; i++){
           if(map[gsize[i]].size() < gsize[i]){
               map[gsize[i]].push_back(i);
           }
           if(map[gsize[i]].size() == gsize[i]){
               result.push_back(map[gsize[i]]);
               map[gsize[i]] = {};
           }
       }
       return result;
    }
};
class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
       unordered_map<int,int> umap;
        for(auto it:candyType){
            umap[it]++;
        }
        int n = candyType.size();
        int m = umap.size();
        return min(n/2,m);
    }
};
class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        int result = 0;
        unordered_map<int,int> umap;
        for(auto &i:tasks)
            umap[i]++;
        for(auto i:umap)
        {
            if(i.second == 1) return -1;
            if(i.second%3 == 0) result+=i.second/3;
            else
                result+=i.second/3 + 1;
        }
        return result;
    }
};
class Solution {
public:
    static bool comp(pair<string,int>p1, pair<string,int>p2){
    if(p1.second>p2.second || (p1.second==p2.second && p1.first<p2.first))
            return true;
        return false;
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<string>result;
        unordered_map<string,int> umap;
        for(auto s:words)
            umap[s]++;
        vector<pair<string,int>> temp;
        for(auto i:umap)
            temp.push_back({i.first,i.second});
        sort(temp.begin(),temp.end(),comp);
        for(int i = 0;i<k;i++) result.push_back(temp[i].first);
        return result;
    }
};
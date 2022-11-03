class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int>v;
        for(auto it:points)
            v.push_back(it[0]);
        sort(v.begin(),v.end());
        int result = 0;
        for(int i = 0;i<v.size()-1;i++)
        {
            result = max(result,v[i+1] - v[i]);    
        }
        return result;
    }
};
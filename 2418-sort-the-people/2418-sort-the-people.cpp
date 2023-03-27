class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int,string>>nameHeight;
        int n = names.size();
        for(int i = 0; i<n; i++){
            nameHeight.push_back({heights[i],names[i]});
        }
        sort(nameHeight.rbegin(), nameHeight.rend());
        vector<string>result;
        for(auto i:nameHeight){
            result.push_back(i.second);
        }
        return result;
    }
};
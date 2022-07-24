class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> tab;
        for(auto it:nums)
            tab[it]++;
        vector<int>result;
       for(auto it:tab)
           if(it.second == 2)
               result.push_back(it.first);
        return result;
    }
};
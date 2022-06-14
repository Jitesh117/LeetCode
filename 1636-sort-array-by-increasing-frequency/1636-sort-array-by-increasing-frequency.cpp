class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>hash;
        for(auto it:nums)
            hash[it]++;
        vector<pair<int,int>>temp;
        for(auto it:hash)
            temp.push_back({it.second,it.first});
        sort(temp.begin(),temp.end(),greater);
        vector<int>result;
        for(auto it:temp)
        {
            int count = it.first;
            while(count--)
                result.push_back(it.second);
        }
        return result;
    }
    static bool greater(pair<int,int>a, pair<int,int>b)
    {
        if(a.first == b.first)
            return a.second>b.second;
        return a.first<b.first;
    }
};
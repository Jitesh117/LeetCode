class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>one,two;
        for(auto i:nums1)
            one[i]++;
        for(auto i:nums2)
            two[i]++;
        vector<int>result;
        for(auto i:one)
            if(two[i.first]>0)
                result.push_back(i.first);
        return result;
    }
};
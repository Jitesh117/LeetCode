class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
         unordered_map<int,int>one,two;
        for(auto i:nums1)
            one[i]++;
        for(auto i:nums2)
            two[i]++;
        vector<int>result;
        for(auto i:one)
            if(two[i.first]>0)
            {
                int n = min(two[i.first],i.second);
                    while(n--)
                        result.push_back(i.first);
            }
        return result;
    }
};
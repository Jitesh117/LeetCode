class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
       unordered_map<int,int>one,two;
       vector<vector<int>>result(2);
       
        for(auto n:nums1)one[n]++;
        for(auto n:nums2)two[n]++;
        
        for(auto it:one){
            if(two[it.first] == 0) result[0].push_back(it.first);
        }
        for(auto it:two){
            if(one[it.first] == 0) result[1].push_back(it.first);
        }
        
        return result;
    }
};
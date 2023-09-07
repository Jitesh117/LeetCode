class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> map;
        for(auto &it: nums){
            if(map[it]) return true;
            map[it]++;
        }
        return false;
    }
};
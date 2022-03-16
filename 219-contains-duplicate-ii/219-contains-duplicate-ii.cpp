class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
       unordered_map<int,int> count;
        int i = 0;
        for(int j = 0;j<nums.size();j++)
        {
            if(j>k)
               count[nums[i++]]--;
             if(count[nums[j]]>0)
                return true;
            
                count[nums[j]]++;
        }
        return false;
    }
};
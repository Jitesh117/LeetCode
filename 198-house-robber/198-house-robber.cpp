class Solution {
public:

    int rob(vector<int>& nums) {
       vector<int> t;
        t.push_back(0);
        for(int i = 0;i<nums.size();i++)
            t.push_back(nums[i]);
    
        t[1] = nums[0];
        for(int i = 2;i<t.size();i++)
        {
            t[i] = max(t[i]+ t[i-2],t[i-1]);
        }
    return t[t.size()-1];
    }
   
};
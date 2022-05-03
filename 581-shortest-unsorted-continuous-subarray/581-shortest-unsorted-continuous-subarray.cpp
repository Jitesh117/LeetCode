class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
       vector<int> temp = nums;
        int s=0,e=0;
        sort(temp.begin(),temp.end());
        for(int i = 0;i<nums.size();i++)
            if(temp[i] != nums[i])
            {
                s=i;
                break;
            }
        for(int i = nums.size()-1;i>=0;i--)
            if(temp[i]!=nums[i])
            {
                e=i;
                break;
            }
       if(e == 0 && s == 0)
           return 0;
        return e-s+1;
    }
};
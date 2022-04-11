class Solution {
public:
    int arraySign(vector<int>& nums) {
       sort(nums.begin(),nums.end());
        int neg = 0;
        for(int i =0;i<nums.size();i++)
        {
            if(nums[i]<0)
                neg++;
            else if(nums[i] ==0)
             return 0;
            else
                break;
        }
        if(neg%2==0)
            return 1;
        return -1;
    }
};
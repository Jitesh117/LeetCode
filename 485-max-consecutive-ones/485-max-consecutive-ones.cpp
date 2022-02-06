class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxcon = 0;
         int consec = 0;
        for(int i = 0;i<nums.size();i++)
        {
           if(nums[i]==1)
               consec++;
            else
                consec = 0;
            maxcon = max(maxcon, consec);
            
        }
        return maxcon;
    }
};
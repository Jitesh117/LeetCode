class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;
    
        for(int i = 0;i<k;i++)
       {
           sum+=nums[i];
       }
        
        double msum = sum,j=0;
        for(int i = k;i<nums.size();i++)
        {
           sum+=nums[i]- nums[i-k];
            msum = max(sum,msum);
        }
        double avg = msum/k;
        return avg;
    }
};
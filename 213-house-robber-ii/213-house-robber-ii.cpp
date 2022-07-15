class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int>one,two;
        
        int n = nums.size();
        if(n == 1)
            return nums[0];
        for(int i = 0;i<n;i++)
        {   if(i>0)
                one.push_back(nums[i]);
            if(i < n-1)
                two.push_back(nums[i]);
        }
        return max(solve(one),solve(two));
    }
    int solve(vector<int>& nums) {
        int n = nums.size();
        int prev=nums[0],prev2=0;
        for(int i = 1;i<n;i++)
        {
            int take = nums[i];
            if(i>1)
                take+=prev2;
            int nontake = prev;
            int curi = max(take,nontake);
            prev2 = prev;
            prev = curi;
        }
        return prev;
    }
};
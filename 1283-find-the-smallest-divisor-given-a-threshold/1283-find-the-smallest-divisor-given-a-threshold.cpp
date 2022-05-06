class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int beg = 1,end= 1000000;
        int ans;
        while(beg<=end)
        {
            int mid = beg + (end-beg)/2;
            int temp = solve(nums,threshold,mid);
            if(temp<=threshold)
            {
                ans = mid;
                end=mid-1;
            }
            else
                beg = mid+1;
        }
        return ans;
    }
    int solve(vector<int> &nums,int threshold, int k)
    {
        int sum = 0;
        for(int i = 0;i<nums.size();i++)
        {
            if(nums[i]%k == 0)
                sum+=nums[i]/k;
            else
                sum+=nums[i]/k+1;
        }
       return sum;
    
    }
};
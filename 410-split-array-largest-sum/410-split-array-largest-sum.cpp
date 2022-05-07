class Solution {
public:
    int splitArray(vector<int>& nums, int m) {
        int sum = 0;
        for(int i = 0;i<nums.size();i++)
            sum+=nums[i];
        int beg = *max_element(nums.begin(),nums.end()),end=sum;
        while(beg<=end)
        {
            int mid = beg + (end-beg)/2;
            if(solve(nums,mid,m))
                end=mid-1;
            else
                beg=mid+1;
        }
        return beg;
    }
    int solve(vector<int>& nums,int mid,int m)
    {
        int count = 1,sum = 0;
        for(int i = 0;i<nums.size();i++)
        {
           sum+=nums[i];
            if(sum>mid)
            {
                sum=nums[i];
                count++;
            }
                if(count>m)
                    return false;
        }
        return true;
    }
};
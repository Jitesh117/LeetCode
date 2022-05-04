class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> res;
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            sum = 0;   
            for(int j=i;j<n;j++)
            {
                sum+=nums[j];
                res.push_back(sum);
            }
        }
       sort(res.begin(),res.end());
        sum = 0;
        int MOD  = 1000000007;
        
       
        for(int i=left-1;i<=right-1;i++)
            sum = (sum + res[i]) % MOD; 
        
        return sum;
        
    }
};
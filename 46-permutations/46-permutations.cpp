class Solution {
public:
    vector<vector<int>>result;
    
    vector<vector<int>> permute(vector<int>& nums) {
        
        solve(nums,0,nums.size()-1);
        return result;
    }
    
    void solve(vector<int>&nums,int i, int n)
    {
        if(i == n)
        {
            result.push_back(nums);
            return;
        }
        for(int j = i;j<nums.size();j++)
        {
            swap(nums[i],nums[j]);
            solve(nums,i+1,n);
            swap(nums[i],nums[j]);
        }
    }
};
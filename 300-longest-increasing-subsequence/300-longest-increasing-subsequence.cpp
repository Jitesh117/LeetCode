class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
    int n = nums.size();
        vector<vector<int>>t(n,vector<int>(n+1,-1));
        return solve(0,-1,nums.size(),nums,t);
    }
    int solve(int ind,int prev,int n,vector<int>&nums,vector<vector<int>>&t)
    {
        if(ind == n)
            return 0;
        if(t[ind][prev+1]!=-1)
            return t[ind][prev+1];
        
        int len = 0 + solve(ind+1,prev,n,nums,t);
        
        if(prev == -1 or nums[ind]>nums[prev])
            len = max(len,1+solve(ind+1,ind,n,nums,t));
        return t[ind][prev+1] = len;
    }
};
class Solution {
public:
    long long solve(int index,int p, vector<int>&nums,int x,vector<vector<long long>>&dp){
        int n= nums.size();
        if(index>=n) return 0;
        if(dp[index][p]!=-1) return dp[index][p];
        long long take=0;
        long long nottake=0;
        nottake= solve(index+1,p,nums,x,dp);
        if(nums[index]%2==p){
            take= nums[index] + solve(index+1,p,nums,x,dp);
        }
        else{
            take= nums[index]-x + solve(index+1,nums[index]%2,nums,x,dp);
        }
        return dp[index][p]= max(take,nottake);
    }
    long long maxScore(vector<int>& nums, int x) {
        int n= nums.size();
        int p= nums[0]%2;
        vector<vector<long long>>dp(n+1,vector<long long>(2,-1));
        return nums[0]+ solve(1,p,nums,x,dp);
        
    }
};
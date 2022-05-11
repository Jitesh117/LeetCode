class Solution {
public:
    vector<vector<int>>result;
    set<vector<int>> temp;
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        solve(nums,0,nums.size()-1);
        for(auto i = temp.begin();i!=temp.end();i++)
           result.push_back(*i);
        
        return result;
    }
    void solve(vector<int>& nums,int i,int n)
    {
        if(i == n)
        {
           temp.insert(nums);
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
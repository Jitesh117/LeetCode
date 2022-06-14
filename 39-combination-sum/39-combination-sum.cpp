class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& c, int target) {
        sort(c.begin(),c.end());
        vector<int> temp;
        vector<vector<int>>result;
        solve(0,c,target,temp,result);
        return result;
    }
    void solve(int i,vector<int>&c, int target, vector<int>temp,vector<vector<int>>&result)
    {
        if(target == 0)
        {
            result.push_back(temp);
            return;
        }
        for(int j = i;j<c.size();j++)
        {
    
            if(c[j]>target)
                break;
            temp.push_back(c[j]);
            solve(j,c,target-c[j],temp,result);
            temp.pop_back();
        }
    }
};
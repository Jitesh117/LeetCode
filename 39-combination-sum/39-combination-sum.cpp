class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& c, int target) {
        vector<vector<int>> result;
        sort(c.begin(),c.end());
        vector<int> temp;
        solve(c,target,temp,result,0);
        
        return result;
    }
    void solve(vector<int>& c, int target,vector<int> &temp, vector<vector<int>> &result, int i)
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
            solve(c,target-c[j],temp,result,j);
            temp.pop_back();
        }
    }
};
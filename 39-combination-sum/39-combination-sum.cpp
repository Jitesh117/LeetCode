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
        while(i<c.size() && target-c[i]>=0)
        {
            temp.push_back(c[i]);
            solve(c,target-c[i],temp,result,i);
            i++;
            temp.pop_back();
        }
    }
};
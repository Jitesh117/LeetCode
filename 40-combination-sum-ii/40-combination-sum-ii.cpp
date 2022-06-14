class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& c, int target) {
        sort(c.begin(),c.end());
        vector<vector<int>> result;
        vector<int>temp;
        solve(0,target,c,temp,result);
        return result;
    }
    void solve(int i,int target, vector<int>&c,vector<int>temp,vector<vector<int>>&result)
    {
        if(target == 0)
        {
            result.push_back(temp);
            return;
        }
        for(int j = i;j<c.size();j++)
        {
            if(j>i && c[j]==c[j-1])
                continue;
            if(c[i]>target)
                break;
            temp.push_back(c[j]);
            solve(j+1,target-c[j],c,temp,result);
            temp.pop_back();
            
        }
    }
};
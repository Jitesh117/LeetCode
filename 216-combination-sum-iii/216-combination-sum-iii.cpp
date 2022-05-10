class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> c = {1,2,3,4,5,6,7,8,9};
        vector<int> temp;
        vector<vector<int>> result;
        solve(c,n,k,temp,result,0);
        
        return result;
    }
    void solve(vector<int>& c,int target,int count,vector<int> temp,vector<vector<int>>& result,int i)
    {
        if(target == 0 && count == 0)
        {
            result.push_back(temp);
            return;
        }
        for(int j = i;j<c.size();j++)
        {

            if(c[j]>target)
                break;
            temp.push_back(c[j]);
            solve(c,target-c[j],count-1,temp,result,j+1);
            temp.pop_back();
        }
    }
};
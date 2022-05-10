class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& c, int target) {
        sort(c.begin(),c.end());
        vector<int> temp;
        vector<vector<int>> result;
        solve(c,target,temp,result,0);
        
        return result;
    
    }
    void solve(vector<int>& c,int target,vector<int> temp,vector<vector<int>> &result,int i)
    {
        if(target == 0)
        {
            result.push_back(temp);
            return;
        }
       for(int j = i;j<c.size();j++)
       {
           if(j>i && c[j] == c[j-1])
               continue;
           if(c[j]>target)
               break;
           temp.push_back(c[j]);
           solve(c,target-c[j],temp,result,j+1);
           temp.pop_back();
       }
        
    }
};
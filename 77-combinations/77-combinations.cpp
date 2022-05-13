class Solution {
public:
    vector<vector<int>>result;
    vector<vector<int>> combine(int n, int k) {

        vector<int> temp;
        solve(n,k,1,temp);
        
        return result;
    }
    void solve(int n, int k,int ind,vector<int>temp)
    {
        if(temp.size() == k)
        {
            result.push_back(temp);
            return;
        }
         for(int i = ind;i<=n;i++)
         {
             temp.push_back(i);
             solve(n,k,i+1,temp);
             temp.pop_back();
         }
        
    }
};
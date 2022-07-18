class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>c = {1,2,3,4,5,6,7,8,9};
        vector<int>temp;
        vector<vector<int>>result;
        solve(0,c,n,k,temp,result);
        return result;
    }
    void solve(int i, vector<int>&c,int n, int k, vector<int>temp,vector<vector<int>>&result)
    {
        if(n == 0 and k == 0)
        {
            result.push_back(temp);
            return;
        }
        
        for(int j = i;j<9;j++)
        {
            if(c[j]>n)
                break;
            temp.push_back(c[j]);
            solve(j+1,c,n-c[j],k-1,temp,result);
            temp.pop_back();
        }
    }
};
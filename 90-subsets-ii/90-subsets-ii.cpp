class Solution {
public:
    set<vector<int>> result;
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> output;
        vector<vector<int>>ans;
        solve(nums,output);
        for(auto i = result.begin();i!=result.end();i++)
            ans.push_back(*i);
        return ans;
    }
    void solve(vector<int> input,vector<int> output)
    {
        if(input.size() == 0)
        {
            sort(output.begin(),output.end());
            result.insert(output);
            return;
        }
        vector<int> output1=output,output2=output;
         output2.push_back(input[0]);
        input.erase(input.begin()+0);
        solve(input,output1);
        solve(input,output2);
        
    }
};
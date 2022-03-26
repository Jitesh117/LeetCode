class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>output;
        solve(nums,output);
        return ans;
    }
    void solve(vector<int> input,vector<int> output)
    {
        if(input.size()==0)
        {
            ans.push_back(output);
            return;
        }
        vector<int> output1=output,output2=output;
        output2.push_back(input[0]);
        input.erase(input.begin()+0);
        solve(input,output1);
        solve(input,output2);
        return;
    }
};
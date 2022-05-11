class Solution {
public:
    vector<vector<int>>result;

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>output;
        solve(nums,output);
        return result;
    }
    void solve(vector<int>input,vector<int>output)
    {
        if(input.size() == 0)
        {
            result.push_back(output);
            return;
        }
        vector<int> output1=output,output2=output;
        output2.push_back(input[0]);
        input.erase(input.begin()+0);
        solve(input,output2);
        solve(input,output1);
    }
    
};
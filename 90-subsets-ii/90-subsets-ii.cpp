class Solution {
public:
    vector<vector<int>>result;
    set<vector<int>>temp;
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>output;
        solve(nums,output);
        for(auto i = temp.begin();i!=temp.end();i++)
            result.push_back(*i);
        
        return result;
    }
    void solve(vector<int>input,vector<int>output)
    {
        if(input.size()==0)
        {
            sort(output.begin(),output.end());
            temp.insert(output);
            return;
        }
        vector<int> output1 = output,output2 = output;
        output2.push_back(input[0]);
        input.erase(input.begin()+0);
        solve(input,output1);
        solve(input,output2);
    }
};
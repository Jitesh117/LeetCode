class Solution {
public:
    vector<string> generateParenthesis(int n) {
        string output;
        vector<string> result;
        solve(n,n,output,result);
        return result;
    }
    void solve(int open, int close, string output, vector<string> &result)
    {

        if(open == 0 && close == 0)
        {
            result.push_back(output);
            return;
        }
        if(open!=0)
        {
            string output1 = output;
            output1+='(';
            solve(open-1,close,output1,result);
        }
        if(close>open)
        {
            string output2 = output;
            output2+=')';
            solve(open,close-1,output2,result);
        }
    }
};
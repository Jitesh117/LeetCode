class Solution {
public:
    vector<string> result;
    vector<string> generateParenthesis(int n) {
        int open = n,close = n;
        solve(open,close,"");
        return result;
    }
    void solve(int open, int close,string temp)
    {
        if(close == 0 && open == 0)
        {
            result.push_back(temp);
            return;
        }
        if(open!=0)
        {
           string output1=temp;
            output1+='(';
            solve(open-1,close,output1);
        }
        if(close>open)
        {
            string output2=temp;
            output2+=')';
            solve(open,close-1,output2);
        }
        
    }
};
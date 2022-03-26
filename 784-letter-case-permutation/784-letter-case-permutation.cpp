class Solution {
public:
    vector<string> letterCasePermutation(string s) {
        string input = s;
        string output = "";
        vector<string> result;
        solve(input,output,result);
        return result;
    }
    
    void solve(string input,string output,vector<string> &result)
    {
        if(input.size()==0)
        {
            result.push_back(output);
            return;
        }
        if(isalpha(input[0]))
        {
            string output1 = output;
            string output2 = output;
            output1.push_back(tolower(input[0]));
            output2.push_back(toupper(input[0]));
            
            input.erase(input.begin()+0);
            
            solve(input,output1,result);
            solve(input,output2,result);
            
        }
        else
        {
            string output1 = output;
            output1.push_back(input[0]);
            input.erase(input.begin()+0);
            solve(input,output1,result);
        }
    }
};
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits.size() == 0)
            return {};
        string output="";
        vector<string>result;
        solve(output,result,digits);
        return result;
    }
    void solve(string output,vector<string>&result,string digits)
    {
         vector<string> v={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        if(digits.size() == 0)
        {
            result.push_back(output);
            return;
        }
       
        string s = v[digits[0]-'0'];
        digits.erase(digits.begin()+0);
        for(int i =0 ;i<s.size();i++)
            solve(output+s[i],result,digits);
        
    }
        
};
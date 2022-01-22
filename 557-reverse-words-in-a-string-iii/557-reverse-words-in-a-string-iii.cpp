class Solution {
public:
    string reverseWords(string s) {
        s= s+" ";
        string ans = "";
        string temp = "";
        for(int i = 0;i<s.size();i++)
        {
            if(s[i]!=32)
            {
                temp = s[i]+temp;
            }
            else
            {
                if(ans.size()==0)
                    ans = temp;
                else
                    ans+=" "+ temp;
                    temp = "";     
            }
        }
        return ans;
    }
};
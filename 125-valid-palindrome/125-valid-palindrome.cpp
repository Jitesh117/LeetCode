class Solution {
public:
    bool isPalindrome(string s) {
        string temp;
        for(int i = 0;i<s.size();i++)
        {
            if(isalnum(s[i]))
                temp.push_back(s[i]);
        }
        for(int i = 0;i<temp.size()/2;i++)
        {
            int last = temp.size()-i-1;
            if(tolower(temp[last]) != tolower(temp[i]))
                return false;
        }
        
        return true;
    }
};
class Solution {
public:
    bool isValid(string s) {
       stack<char>st;
        for(int i = 0;i<s.size();i++){
            if(st.empty())
                st.push(s[i]);
            else if(s[i] == '(' or s[i] == '[' or s[i] == '{')
                st.push(s[i]);
            else if(st.top() - s[i] < 0 and st.top() - s[i]>=-2) 
                st.pop();
            else return false;
        }
        if(st.size()) return false;
        return true;
    }
};
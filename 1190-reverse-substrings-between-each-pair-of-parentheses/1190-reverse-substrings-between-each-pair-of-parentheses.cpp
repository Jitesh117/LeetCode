class Solution {
public:
    string reverseParentheses(string s) {
        string result;
        stack<string>st;
        int n = s.size();
        
        for(int i = 0; i < n; i++){
            if(s[i] == '('){
                st.push(result);
                result = "";
            }
            else if(s[i] == ')'){
               reverse(result.begin(), result.end());
               result = st.top() + result;
               st.pop(); 
            }
            else
                result += s[i];
        }
        return result;
    }
};
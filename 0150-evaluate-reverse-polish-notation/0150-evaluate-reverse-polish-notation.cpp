class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st; 
        for(string s: tokens){
            if(s != "+" and s != "-" and s != "*" and s != "/")
                st.push(stoi(s));
            else{
                long long second = st.top();
                st.pop();
                long long first = st.top();
                st.pop();
                long long  temp;
                if( s == "+") temp = (first+second);
                if( s == "-") temp = (first-second);
                if( s == "*") temp = (first*second);
                if( s == "/") temp = (first/second);
                st.push(temp);
            }
        }
        return st.top();
    }
};
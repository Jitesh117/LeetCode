class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>st;
        int i = 0;
        for(auto push: pushed){
            st.push(push);
            while(st.size() and st.top() == popped[i]){
                st.pop();
                i++;
            }
        }
        return st.size() == 0;
    }
};
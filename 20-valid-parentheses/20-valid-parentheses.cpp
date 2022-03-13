class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        
        int n = s.length();
        
        for(int i=0;i<n;i++)
        {
            char a = s[i];
            
            if(st.size()==0)
                st.push(a);
            
            else if(a=='{'||a=='['||a=='(')
                st.push(a);
            
            else if(st.top()-a<0&&st.top()-a>=-2) //opening and closing brackets have ascci value within 2
                st.pop();
            
            else return false;
        }
        
        if(st.size()>0)
            return false;
        
        return true;
    }
};
    

class Solution {
public:
    string solve( string &s, int& i) {
        string result;
        
        while (i < s.length() && s[i] != ']') {
            if (!isdigit(s[i]))
                result += s[i++];
            else {
                int n = 0;
                while (i < s.length() && isdigit(s[i]))
                    n = n * 10 + s[i++] - '0';
                    
                i++; 
                string t = solve(s, i);
                i++;
                
                while (n-- > 0)
                    result += t;
            }
        }
        return result;
    }

    string decodeString(string s) {
        int i = 0;
        return solve(s, i);
    }
};
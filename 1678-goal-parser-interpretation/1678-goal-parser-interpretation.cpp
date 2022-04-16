class Solution {
public:
    string interpret(string s) {
        string result = "";
        for(int i = 0;i<s.size();)
        {
            if(s[i] == 'G'){
                result+='G';
                i++;
            }
            else if(s[i+1] == ')')
            {
                result+="o";
                i+=2;
            }
            else
            {
                result+="al";
                i+=4;
            }
        }
        return result;
    }
};
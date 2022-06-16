class Solution {
public:
    int lengthOfLastWord(string s) {
        int result = 0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i] == ' ' && result > 0) 
                return result;
            if(s[i] != ' ') 
                result++;
        }
        return result;
    }
};
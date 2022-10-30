class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int result = 1;
        for(string s:sentences){
            int temp = 1;
            for(char c:s){
                if(c == ' ')
                    temp++;
            }
            result = max(result,temp);
        } 
        return result;
    }
};
class Solution {
public:
    int balancedStringSplit(string s) {
        int r = 0;
        int result = 0;
        for(char c:s){
            if(c == 'R') r++;
            else r--;
            if(!r){
               result++;
                r = 0;
            }
        }
        return result;
    }
};
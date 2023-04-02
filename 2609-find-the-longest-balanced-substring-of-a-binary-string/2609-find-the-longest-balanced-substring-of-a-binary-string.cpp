class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
        int result = 0;
        int count = 0;
        int tresult = 0;
        bool prevOne = false;
        for(auto i:s){
            if(i == '0'){
                tresult = 0;
                if(prevOne){
                count=1;
                prevOne = false;   
                }
                else count++;
            }
            else{
                prevOne = true;
                if(count){
                    tresult+=2;
                    count--;
                    result = max(result,tresult);
                }
            }
        }
        return result;
    }
};
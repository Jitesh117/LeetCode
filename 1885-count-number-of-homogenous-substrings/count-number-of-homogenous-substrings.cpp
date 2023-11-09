class Solution {
public:
    int mod = 1e9 + 7;
    int countHomogenous(string s) {
        int result = 0;
        char prev = ' ';
        int count = 0;
        for(char it: s){
            if(it == prev) count++;
            else count = 1;
            prev = it;
            result = (result + count) % mod;
        }
        return result;
    }
};
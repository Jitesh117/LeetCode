class Solution {
public:
    int numberOfMatches(int n) {
        int result = 0;
        while(n > 1){
            if(n & 1){
                result += (n - 1) / 2;
                n -= (n - 1) / 2;
            }
            else{
                result += n / 2;
                n /= 2;
            }
        }
        return result;
    }
};
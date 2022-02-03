class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n ==0)
            return false;
        return(n ==1 || (isPowerOfFour(n/4) && n%4 ==0));
    }
};
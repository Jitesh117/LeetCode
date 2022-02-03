class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n ==0)
            return false;
        return(n ==1 ||(isPowerOfThree(n/3) && n%3 ==0));
    }
};
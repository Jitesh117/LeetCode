class Solution {
public:
    bool ans = false;
    bool isPowerOfTwo(int n) {
        if(n==0)
            return false;
        return( n ==1 || (isPowerOfTwo(n/2)&& n%2 ==0));
    }
};
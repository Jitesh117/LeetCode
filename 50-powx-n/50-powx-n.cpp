class Solution {
public:
    double myPow(double x, int n) {
     if(n<0)
         return 1/solve(x,n);
        return solve(x,n);
    }
    double solve(double x, int n)
    {
        if(n == 0)
            return 1;
        double temp = solve(x,n/2);
        if(n&1)
            return temp*temp*x;
        return temp*temp;
    }
};
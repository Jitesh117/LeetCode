class Solution {
public:
    int divide(int dividend, int divisor) {
      if (dividend == INT_MIN && divisor==-1)
          return INT_MAX;
       
        int res = abs(dividend)/abs(divisor);
        res=trunc(res);
        if(dividend<0 && divisor>0 || divisor<0 && dividend>0) 
            res*=-1;
        else 
            res*=1;
        return res;
    }
};
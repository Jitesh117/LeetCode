class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1,sum = 0;
        int temp;
        for(int i = n;i>0;i=i/10)
        {
            sum+=i%10;
            product*=i%10;
        }
        return product-sum;
    }
};